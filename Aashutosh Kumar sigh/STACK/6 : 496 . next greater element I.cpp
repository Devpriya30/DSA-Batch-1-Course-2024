class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack <int> v;
        map<int,int> ans;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!v.empty() && v.top()<=nums2[i])
                v.pop();
            ans[nums2[i]]=(v.empty())?-1:v.top();
            v.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            nums1[i]=ans[nums1[i]];
        }
        return nums1;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(n)
