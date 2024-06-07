class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int start=0,end=m*n-1,row=0,col=0;
        while(start<=end && start<m*n){
            int mid=(start + end)/2;
            row=mid/n;
            col=mid%n;
            if(matrix[row][col]==target)
                return true;
            else if(matrix[row][col]<target)
                start=mid+1;
            else
                end=mid-1;
        }
        return false;
    }
};

TIME COMPLEXITY : O(log(m*n))
SPACE COMPLEXITY : O(1)
