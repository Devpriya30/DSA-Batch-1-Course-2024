class Solution {
public:
    int trap(vector<int>& height) {
    int n = height.size();
        int l= 0 ;
        int r = n-1 ;

        int res = 0 ;
        

        int lhb = 0; 
        int rhb = 0;

        while(l<=r)
        {
            if(lhb <= rhb)
            {
                if(height[l] >= lhb)
                   {
                    lhb = height[l];
                   }
                
                else{
                    res = res + lhb - height[l];
                     }
                l++;
            }
            

            else{

                if(height[r] >= rhb)
                {
                    rhb = height[r];
                }
                else{
                    res = res + rhb - height[r];
                }
                    r--;
                

            }
                
                 
       }
            
       return res;
    }
    
};
