//Day 2
//Question 18
//https://leetcode.com/problems/set-matrix-zeroes/


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> RowZero(m, 0);
        vector<int> ColZero(n, 0);

        // Determine which rows and columns contain zeroes
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    RowZero[i] = 1;
                    ColZero[j] = 1;
                }
            }
        }

        // Set zeroes in the matrix based on RowZero and ColZero
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (RowZero[i] == 1 || ColZero[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};


//Time Complexity -> O(n**2)
