class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int m=*max_element(nums.begin(),nums.end());
        int i;
        for(i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==m)
                break;
        }
        i++;
        reverse(nums.begin(),nums.begin()+i);
        reverse(nums.begin()+i,nums.end());
        reverse(nums.begin(),nums.end());
        stack<int> stack;
        for(int j=nums.size()-1;j>=0;j--)
        {
            while(!stack.empty() && stack.top()<=nums[j])
                stack.pop();
            int a=stack.empty()?-1:stack.top();
            stack.push(nums[j]);
            nums[j]=a;
        }
        i=nums.size()-i;
        reverse(nums.begin(),nums.begin()+i);
        reverse(nums.begin()+i,nums.end());
        reverse(nums.begin(),nums.end());
        return nums;
    }
};

Time Complexity : O(n)
Space Complexity : O(n)
