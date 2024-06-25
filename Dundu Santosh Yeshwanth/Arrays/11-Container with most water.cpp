class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int water=0,left = 0,right = n-1;
        while(left<right){
            water = max(water,min(height[left],height[right])*(right-left));
            if(height[left]>height[right]) right--;
            else left++;
        }
        return water;
    }
};

//Time Complexity - O(N)
//Space Complexity - O(1)
