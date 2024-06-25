//Day 5
//Question 33
//https://leetcode.com/problems/pascals-triangle/description/


//Approach 1

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr(numRows);

        for(int i=0;i<numRows;i++){
            arr[i].resize(i+1);
            arr[i][0] = arr[i][i] = 1;

            for(int j=1;j<i;j++){
                arr[i][j]= arr[i-1][j-1] + arr[i-1][j];
            }
        }

        return arr;
    }
};

//Time Complexity -> O(n**2)

//Optimized Approach

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        if (numRows == 0) return {};
        if (numRows == 1) return {{1}};
        
        vector<vector<int>> pRows = generate(numRows - 1);         //recursion
        vector<int> newRow(numRows, 1);
        
        for (int i = 1; i < numRows - 1; i++) {
            newRow[i] = pRows.back()[i - 1] + pRows.back()[i];
        }
        
        pRows.push_back(newRow);
        return pRows;
        
    }
};

//Time complexity -> O(n**2);
