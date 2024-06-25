class Solution {
    public void setZeroes(int[][] matrix) {
        int rows=matrix.length;
        int cols=matrix[0].length;
        boolean firstrow=false;
        boolean firstcol=false;

        for(int row=0;row<rows;row++)
        {
            if(matrix[row][0]==0)
            firstrow=true;
            
        }
        for(int col=0;col<cols;col++)
        {
            if(matrix[0][col]==0)
            firstcol=true;
            
        }

        for(int row=1;row<rows;row++){
            for(int col=1;col<cols;col++){
            if(matrix[row][col]==0){
                matrix[row][0]=0;
                matrix[0][col]=0;
            } 
            }
        }
            for(int row=1;row<rows;row++){
            for(int col=1;col<cols;col++){
                if(matrix[row][0]==0 || matrix[0][col]==0){
                    matrix[row][col]=0;
                }
            }
            }
              
                   if(firstrow){
                for(int row=0;row<rows;row++)
                    matrix[row][0]=0;
                
            }
            if(firstcol){
                for(int col=0;col<cols;col++)
                    matrix[0][col]=0;
                
            }

        
    }
}
