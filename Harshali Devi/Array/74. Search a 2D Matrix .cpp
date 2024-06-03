//Day 6
//Question 31
//

//Approach 1 ->  Binary Search only in inside loop

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        
        for(auto s : matrix){
            int left=0;
            int right=s.size()-1;
            if(s[left]<=target && s[right]>=target){
                while(left<=right){
                    int mid = left + (right - left) / 2;
                    if(s[mid]==target){
                        return true;
                    }
                    else if(s[mid]<target){
                        left=mid+1;
                    }
                    else{
                        right=mid-1;
                    }
                    }
                }
            }
        return false;
        }
};

//Approach 2 -> Binary Search in both loops

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col = matrix[0].size();
        int row = matrix.size();
        int left = 0;
        int right = (row * col) -1;
        
        while(left<=right){
            int mid = left + (right - left) / 2;
            int element = matrix[mid/col][mid%col];
            if(element==target){
                return true;
            }
            else if(element<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }  
        return false;
    }
};
