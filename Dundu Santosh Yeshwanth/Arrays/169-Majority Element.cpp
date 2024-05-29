class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(auto ele:nums){
            mp[ele]++;
        }
        n = n/2;
        for(auto x:mp){
            if(x.second>n){
                return x.first;
            }
        }
	return 0;
    }
};
//Time Complexity - O(N)
//Space Complexity - O(N)
