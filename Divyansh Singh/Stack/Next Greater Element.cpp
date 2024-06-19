class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mpp;
        stack<int>st;
        int n=nums1.size(),m=nums2.size();
        for(int i=m-1;i>=0;i--){
            if(st.empty()){
               st.push(nums2[i]);
               mpp[nums2[i]]=-1;
            }
            else{
               while(!st.empty() && st.top()<nums2[i]){
                st.pop();
               }
               if(st.empty()){
                mpp[nums2[i]]=-1;
                st.push(nums2[i]);
               }
               else{
                mpp[nums2[i]]=st.top();
                st.push(nums2[i]);
               }
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(mpp.find(nums1[i])!=mpp.end()){
                ans.push_back(mpp[nums1[i]]);
            }
        }
        return ans;
    }
};
