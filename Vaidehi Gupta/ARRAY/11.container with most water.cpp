class Solution {
public:
    int maxArea(vector<int>& height) {
     int i=0,j=height.size()-1;
     int area=0;
     int min1=0;
     while(i<j) 
     {
       if(height[i]<height[j])
        min1=height[i];
        else
        min1=height[j];
        area=max(area,(j-i)*min1);
        if(height[i]<height[j])
        i++;
        else
        j--;

     } 
     return area; 
    }
};


time complexity:O(n)
space complexity: O(1)
