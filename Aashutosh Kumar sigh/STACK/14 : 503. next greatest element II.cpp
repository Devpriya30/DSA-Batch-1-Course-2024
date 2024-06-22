class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       int n=nums.size();
       vector<int>ans1(n);
       for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        stack<int>ans;
        for(int i=nums.size()-1;i>=0;i--){
            while(!ans.empty() && ans.top()<=nums[i]){
                ans.pop();
            }
            if(i<n){
                ans1[i]=ans.empty()?-1:ans.top();
            }
            ans.push(nums[i]);
        }
        return ans1;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(n)
