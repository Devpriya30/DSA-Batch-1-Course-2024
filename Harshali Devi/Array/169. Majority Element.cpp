//Day 2
//Question 20
//https://leetcode.com/problems/majority-element/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map <int,int> majority;
        for(auto s:nums){
            majority[s]++;
        }
        int n=nums.size();
        for(auto s:majority){
            if(majority[s.first]>n/2){
                return s.first;
            }
        }
        return 0;
    }
};

//Time Complexity -> O(n)
