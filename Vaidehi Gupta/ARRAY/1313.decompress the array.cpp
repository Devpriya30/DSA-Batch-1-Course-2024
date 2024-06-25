class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>f;
        vector<int>v;
      for(int i=0;i<nums.size();i=i+2)
      {
          f.push_back(nums[i]);
          v.push_back(nums[i+1]);
      }  
      int j=0;
      nums.clear();
      for(int i=0;i<f[j];i++)
      {
        nums.push_back(v[j]);
        if(i==f[j]-1)
        {
            i=-1;
            j++;
        }
        if(j==f.size())
        break;
      }
      return nums;
    }
};


Time cmplexity:O(n)
space complexity:O(n)
