class Solution {
public:
    int trap(vector<int>& height) {
        int i=0,j=height.size()-1;
        int Lmax=height[i];
        int Rmax=height[j];
        int sum=0;
        while(i < j){
            if(height[i] > Lmax)
            Lmax=height[i];
            if(height[j] > Rmax)
            Rmax=height[j];
            if(height[i] <= height[j]){
                sum=sum+Lmax-height[i];
                i++;
            }
            else{
                sum=sum+Rmax-height[j];
                j--;
            }
        }
        return sum;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)
