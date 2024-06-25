//Day 14
//Question 70
//https://leetcode.com/problems/next-greater-element-ii/

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> result(n, -1);
        stack<int> st; // Stack to store indices

        // We need to traverse the array twice to simulate the circular nature
        for (int i = 0; i < 2 * n; ++i) {
            int num = nums[i % n];
            while (!st.empty() && nums[st.top()] < num) {
                result[st.top()] = num;
                st.pop();
            }
            if (i < n) {
                st.push(i);
            }
        }

        return result;
    }
};

