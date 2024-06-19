class Solution {
    Integer dp[][];
    public int minFallingPathSum(int[][] matrix) {
        dp=new Integer[matrix.length+1][matrix[0].length+1];
        int min=Integer.MAX_VALUE;
        for(int j=0;j<matrix[0].length;j++){
            min=Math.min(min,sol(matrix,0,j));
        }
        return min;
    }
    int sol(int matrix [][],int i,int j){
        if(i>=matrix.length){
            return 0;
        }
        if(j>=matrix[0].length||j<0){
            return (int) Math.pow(10,9);
        }
        if(dp[i][j]!=null)return dp[i][j];
        
        return dp[i][j]=Math.min(Math.min(sol(matrix,i+1,j-1)+matrix[i][j],sol(matrix,i+1,j)+matrix[i][j]),sol(matrix,i+1,j+1)+matrix[i][j]);
    }
}
