class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(target-nums[i]) != mp.end())  // Log (n)
            {
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            else
            {
                mp[nums[i]]=i;
            }
        }
        return ans;
    }
};

Time complexity : O(n log (n)) // doubt
Space Complexity : O(2n) = O(n)
