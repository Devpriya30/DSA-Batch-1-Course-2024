class Solution {
public:
    int maxArea(vector<int>& height) {
              int n = height.size();

              int i = 0 ;
              int j = n-1;
              int lsf = 0 ;
              while(i<j)
              {                                                    //  min(height[i] , height[j]) * j-i;  
                int area = (h-l)*min(height[l],height[h]);                                  // or in one line
                                                                 // lsf = max(lsf, j-i)* min(height[i] , height[j]) ;

                 lsf = max(lsf , area);   
                 if(height[i] < height[j])
                 {
                    i++;
                 }    
                 
                 else {
                    j--;
                 }                                             //min([1 , 7]) * 8-0
                                                                   //1 * 8
                                                                   //= 8
               }


               return lsf;
        
    }
};


// Optimal approach using - using two pointer approach
//TC- O(n)
//SC -O(1)



// brute force TC-O(n^2)
// int n =height.size();
// int res=0;
// for(int i =0;i<n;i++){
// for(int j=i+1;j<n;j++){
// int area=(j-i)*min(height[j],height[i]);
// res=max(res,area);
// }
// }
// return res;


