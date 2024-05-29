//Day 2
//Question 18
//https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int nRows = matrix.size();
        int nColumns = matrix[0].size();

        //Step1. Transpose
        for(int i = 0; i<nRows; i++){
            for(int j = i; j<nColumns; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //Step2. Reverse Row Wise
        for(int i = 0; i<nRows; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
};

//Time Complexity -> O(n)
