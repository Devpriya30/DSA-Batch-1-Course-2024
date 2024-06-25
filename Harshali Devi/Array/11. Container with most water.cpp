//Day 4
//Question 24
//https://leetcode.com/problems/container-with-most-water/description/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0;
        int l=0;
        int r=height.size()-1;
        while(l<r){
            int val = min(height[l],height[r]);
            long long area = abs(r - l) * val;
            if(maxarea<area){
                maxarea=area;
            }
            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return maxarea;
    }
};

//Time Complexity -> O(n)
