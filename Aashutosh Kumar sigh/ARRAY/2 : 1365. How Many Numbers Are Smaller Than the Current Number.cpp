class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v = nums;
        int n = nums.size();
        map<int,int> ans;
        sort(v.begin(),v.end());
        for(int i = n-1;i >= 0; i--)    
        ans[v[i]] = i;
        for(int i = 0; i < n;i++){
            nums[i] = ans[nums[i]];
        }
        return nums;
    }
};

TIME COMPLEXITY : O(nlogn)
SPACE COMPLEXITY : O(n)
