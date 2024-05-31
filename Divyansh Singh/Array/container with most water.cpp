class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,area=0;
        while(i<j){
            int h=min(height[i],height[j]);
            int b=j-i;
            area=max(h*b,area);
            if(height[i]<=height[j]){
                i++;
            }
            else{
                j--;
            }

        }
        return area;
    }
};
