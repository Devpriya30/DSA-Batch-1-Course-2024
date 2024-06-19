class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>mp;
        vector<int>result(nums1.size(),-1);
        for(auto it:nums2){
            while(!st.empty() && it>st.top()){
                mp[st.top()]=it;
                st.pop();
            }
            st.push(it);
        }
        for(int i=0;i<nums1.size();i++){
            if(mp[nums1[i]]){
                result[i]=mp[nums1[i]];
            }
        }
        return result;
    }
};
