class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>a;
        int l=nums.size()*2;
        int j=0;
      for(int i=0;i<l;i++)
      {
         a.push_back(nums[j]);
         j++;
         if(j==l/2)
           j=0;
      }  
      return a;
    }
};
time complexity:O(n)
space complexity:O(n)
