class Solution {
    public int trap(int[] height) {
       int s=0,e=height.length-1,rm=0,lm=0,ans=0;
       while(s<e){
        if(height[s]<height[e]){
            if(height[s]>lm){
                lm=height[s++];

            }
            else{
                ans+=lm-height[s++];

            }
        }
        else{
            if(height[e]>rm){
                rm=height[e--];
            }
                
            else{
                ans+=rm-height[e--];
                }
            
            }
       }
       return ans;
    }
}
