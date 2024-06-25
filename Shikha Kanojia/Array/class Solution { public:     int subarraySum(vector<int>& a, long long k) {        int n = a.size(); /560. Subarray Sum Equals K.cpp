class Solution {
public:
    int subarraySum(vector<int>& a, long long k) {

      int n = a.size(); // size of the array.

     long long csum[n+1];

     csum[0] = 0 ;

     for(int i = 0 ; i<n ; i++)
     {

     csum[i] = csum[i-1] + a[i-1];
     }

     int k = INT_MIN;

     for(int i=0 ; i<n ; i++)
     {
         for(int j = i ; j< n ; j++)
         {
             int sum = csum[j+1] - csum[i];
             
             if(sum > k)
             {
                 k = sum;
             }
         }
     }

     return k;

}
   
};
