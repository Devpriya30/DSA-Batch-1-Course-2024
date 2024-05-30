class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int val;
        vector<int>ans;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            val=target-nums[i];
            if(mpp.find(val)!=mpp.end()){
                ans.push_back(mpp[val]);
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]]=i;
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};
