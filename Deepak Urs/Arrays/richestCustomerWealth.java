class Solution {
    public int maximumWealth(int[][] accounts) {
        int mx = -1;
        int rows = accounts.length;
        int cols = accounts[0].length;

        for(int r = 0; r < rows; r++) {
            int tmp = 0;
            for(int c = 0; c < cols; c++) {
                tmp += accounts[r][c];
            }
            mx = Math.max(mx, tmp);
        }

        return mx;
    }
}