class Solution {
    public int diagonalSum(int[][] mat) {
        int m = mat.length;
        int n = mat[0].length;
        int res = 0;

        // primary
        for(int i =0; i < m; i++) {
            for(int j =0; j < n; j++) {
                //  primary
                if(i == j) {
                    res += mat[i][j];
                }
                // secondary
                if(i+j == n-1) {
                    res += mat[i][j];
                }
            }
        }

        return m*n%2==0 ? res : res-mat[(m-1)/2][(m-1)/2];

    }
}