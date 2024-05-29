class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      map<int,int>mp;
      for(int i=0;i<nums.size();i++)
      {
        mp[nums[i]]++;
      } 
      int sum=0,c;
      for(auto i=mp.begin();i!=mp.end();i++)
      {
        c=mp[i->first];
        sum+=((c-1)*(c))/2;
      } 
      return sum;
    }
};
time complexity:O(n)
space complexity:O(n)

