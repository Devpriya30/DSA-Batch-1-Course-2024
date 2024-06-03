//Day 6 
//Question 31
//https://leetcode.com/problems/trapping-rain-water

class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax = 0;
        int rightmax = 0;
        int res = 0;
        
        int left = 0;
        int right = height.size()-1;
        
        while(left<=right){
            if(height[left]<=height[right]){
                if(height[left]>=leftmax){
                    leftmax=height[left];
                }
                else{
                    res+=leftmax - height[left];
                }
                
                left++;
            }
            else{
                if(height[right]>=rightmax){
                    rightmax=height[right];
                }
                else{
                    res+=rightmax - height[right];
                }
                right--;
            }
        }
        
        return res;
    }
};


//Time Complexity -> O(n)
