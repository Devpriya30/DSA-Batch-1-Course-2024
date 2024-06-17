class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftMax(height.size(),0);
        vector<int>rightMax(height.size(),0);

        leftMax[0]=height[0];
        rightMax[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            leftMax[i]=max(height[i],leftMax[i-1]);
            rightMax[n-i-1]=max(height[n-i-1],rightMax[n-i]);
        }
        int count=0;
        for(int i=0;i<n;i++){
            count+=min(leftMax[i],rightMax[i])-height[i];
        }
        return count;
    }
};