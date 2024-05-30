class Solution {
    public int[][] largestLocal(int[][] grid) {
        int n = grid.length;
        int[][] res = new int[n-2][n-2];
        
        for(int i = 1; i < n-1; i++) {
            for(int j = 1; j < n-1; j++) {
                int mx = 0;

                for (int r = i-1; r <= i+1; r++) {
                    for(int c = j-1; c <= j+1; c++) {
                        mx = mx > grid[r][c] ? mx : grid[r][c];
                    }
                }

                res[i-1][j-1] = mx;
            }
        }
        return res;
    }
}