//Day 2
//Question 21
//https://leetcode.com/problems/majority-element-ii/submissions/1271365252/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>majority;
        vector<int>all;
        int n=nums.size();
        for(auto s: nums){
            majority[s]++;
        }
        for(auto s: majority){
            if(majority[s.first]>n/3){
                all.push_back(s.first);
            }
        }

        return all;

    }
};

//Time Complexity -> O(n)
