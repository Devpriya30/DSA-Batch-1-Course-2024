class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int area=INT_MIN;
        while(i<j){
            int h=min(height[i],height[j]);
            area=max(area,h*(j-i));

            if(h==height[i]){
                i++;
            }
            else{
                j--;
            }
        }
        return area;

    }
};