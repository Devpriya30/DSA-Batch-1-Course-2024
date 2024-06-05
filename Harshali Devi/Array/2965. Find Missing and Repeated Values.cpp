//Day 7
//Question 40
//https://leetcode.com/problems/find-missing-and-repeated-values/

//Approach 1

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size() * grid[0].size(); 
        vector<int> arr(n+1, 0);
        int doublenum = 0;
        //sort decreases TC...
        sort(grid.begin(),grid.end());

        
        for (auto row : grid) {
            for (int num : row) {
                arr[num]++;
                if (arr[num] == 2) {
                    doublenum = num;
                }
            }
        }

        int totalSum = (n * (n + 1)) / 2;
        int thisSum = 0;
        for (auto row : grid) {
            thisSum += accumulate(row.begin(), row.end(), 0);
        }

        int missingnum = totalSum - (thisSum - doublenum);

        return {doublenum,missingnum};
    }
};

//Approach 2 with XOR

//Approach 3 using math

