class Solution {
public:
    int trap(vector<int>& height) {
     int s=0,e=height.size()-1,lm=0,rm=0,ans=0;
     while(s<e)
     {
        if(height[s]<height[e])
        {
            if(lm<height[s])
            {
                lm=height[s];
            }
            ans+=lm-height[s++];
        }
        else
        {
            if(rm<height[e])
            {
                rm=height[e];
            }
             ans+=rm-height[e--];
        }
     }
return ans;
    }
};


time complexity:O(n)
space complexity:O(1)
