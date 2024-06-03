class Solution {
    public void rotate(int[][] matrix) {
        int i,j;
        int row=matrix.length,col=matrix[0].length;
        for(i=0;i<row;i++){
            for(j=i+1;j<col;j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
        }
        for(i=0;i<row;i++){
            for(int col1=0, col2 = col-1;col1<col2;col1++,col2--){
                int temp=matrix[i][col1];
                matrix[i][col1]=matrix[i][col2];
                matrix[i][col2]=temp;


            }
        }
        
    }
}
