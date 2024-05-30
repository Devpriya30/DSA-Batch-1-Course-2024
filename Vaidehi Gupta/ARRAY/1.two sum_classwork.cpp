class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         map<int,int>mp;
     vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
           int b= target-nums[i];
            if(mp.find(b)==mp.end())
                mp[nums[i]]=i;
            else
            {
                res.push_back(i);
             res.push_back(mp[b]);
             break;
            }
        }
        
        return res;
    }
};

time complexity:O(n)
space complexity:(n)
