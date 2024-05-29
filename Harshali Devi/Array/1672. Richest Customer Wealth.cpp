//Day 1
//Question 5
//https://leetcode.com/problems/richest-customer-wealth/description/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        for(int i=0;i<accounts.size();i++){
            int val=0;
            for(int j=0;j<accounts[0].size();j++){
                val+=accounts[i][j];
            }
            sum=max(val,sum);
        }
        return sum;
    }
};

//Time Complexity -> O(n**2)

