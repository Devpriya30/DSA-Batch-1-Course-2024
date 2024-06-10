class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int n = grid.length;
        Map<Integer, Integer> mp = new HashMap<>();
        int[] res = new int[2];

        for(int i = 0; i < grid.length; i++) {
            for(int j = 0; j < grid.length; j ++) {
                if(!mp.containsKey(grid[i][j])) {
                    mp.put(grid[i][j], 1);
                }
                else {
                    res[0] = grid[i][j];
                }
            }
        }

        for(int i = 1; i < (n*n)+1; i++) {
            if(!mp.containsKey(i)) {
                res[1] = i;
            }
        }

        return res;
    }
}