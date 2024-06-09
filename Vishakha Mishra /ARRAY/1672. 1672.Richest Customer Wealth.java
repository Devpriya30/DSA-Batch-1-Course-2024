class Solution {
    public int maximumWealth(int[][] accounts) {
        int n = accounts.length;
        int m = accounts[0].length;
        int i = 0;
        int temp = 0;
        while(i<n){
            int sum = 0;
            for(int j=0; j<m; j++){
                sum += accounts[i][j];
                if(sum>=temp){
                    temp = sum;
                }
            }
            i++;
        }
        return temp;
    }
}
