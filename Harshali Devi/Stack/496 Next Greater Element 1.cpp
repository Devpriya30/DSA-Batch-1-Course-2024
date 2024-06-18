//Day 14
//Question 69
//https://leetcode.com/problems/next-greater-element-i/description/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int>hashtable;

        stack<int>greater;

        for(int i=nums2.size()-1;i>=0;i--){
            while(!greater.empty() && greater.top()<=nums2[i]){
                greater.pop();
            }
            if(greater.empty()){
                hashtable[nums2[i]]=-1;
            }
            else{
                hashtable[nums2[i]]=greater.top();
            }
            greater.push(nums2[i]);
        }

        vector<int>output;

        for(auto num : nums1){
            if(hashtable.find(num)!=hashtable.end()){
                output.push_back(hashtable[num]);
            }
            else{
                output.push_back(-1);
            }
        }

        return output;


    }
};
