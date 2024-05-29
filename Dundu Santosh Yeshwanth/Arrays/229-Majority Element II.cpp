class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        int n = nums.size();

        for(auto ele:nums){
            mp[ele]++;
        }
        for(auto item:mp){
            if(mp[item.first]>n/3){
                ans.push_back(item.first);
            }
        }
        return ans;
    }
};
//Time Complexity - O(N)
//Space Complexity - O(N)
