//Day 2
//Question 13
//https://leetcode.com/problems/matrix-diagonal-sum/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n = mat.size();
        for(int i=0;i<mat.size();i++){
            sum+=mat[i][i];
            sum += mat[i][n - 1 - i];  
        }
        if (n % 2 == 1) {
            int mid = n / 2;
            sum -= mat[mid][mid];
        }
        return sum;
    }
};

//Time Complexity -> O(n)
