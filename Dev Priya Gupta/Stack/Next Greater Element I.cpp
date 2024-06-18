class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp;
        stack<int> stack;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!stack.empty() && stack.top()<=nums2[i])
                stack.pop();
            mp[nums2[i]]=(stack.empty())?-1:stack.top();
            stack.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++)
            nums1[i]=mp[nums1[i]];
        return nums1;
    }
};

Time Complexity : O(n)
Space Complexity : O(n)
