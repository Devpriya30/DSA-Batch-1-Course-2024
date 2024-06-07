class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0;
        for(int i=0,j=height.size()-1;i<j;){
            int area=(min(height[i],height[j]))*(j-i);
            maxarea=max(maxarea,area);
            if(height[i]>height[j])
            j--;
            else
            i++;
        }
        return maxarea;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)
