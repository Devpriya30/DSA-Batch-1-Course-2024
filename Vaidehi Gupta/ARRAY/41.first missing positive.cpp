class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int c=0,i; 
        sort(nums.begin(),nums.end());
       auto it=std::find(nums.begin(),nums.end(),1);
        if(it==nums.end())
          return 1; 

      int max=nums[nums.size()-1];
      map<int,int>mp;
      for(int i=0;i<nums.size();i++)
         mp[nums[i]]=nums[i];

      for( i=1;i<=max;i++)
      {
        if(mp.find(i)==mp.end())
        {
           c=1;  break;
        }
        }
         
        if(c==0) return max+1;
        else return i;
    }
};

time complexity:O(n)
space complexity:O(n)
