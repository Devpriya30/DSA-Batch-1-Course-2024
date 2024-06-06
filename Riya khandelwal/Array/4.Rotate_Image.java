class Solution {
    public void rotate(int[][] matrix) {
       int rows = matrix.length;
       int cols  = matrix[0].length;
       for(int row =0 ; row< rows ; row++)
       {
        for(int col = row + 1 ; col < cols; col++)
        {
            int t= matrix[row][col];
            matrix[row][col] = matrix[col][row];
            matrix[col][row] = t;
        }

       }
       for(int row =0 ; row< rows ; row++)
       {
        for(int cols1 =0 , col2 = cols-1; cols1< col2; cols1++,col2--)
        {
            int t = matrix[row][cols1];
            matrix[row][cols1]=matrix[row][col2];
            matrix[row][col2]=t;
        }
       }

 }
}

//T.C = O(n2)

//S.C = O(1)
