class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int row=matrix.length,col=matrix[0].length,start=0,end=row*col-1;
        while(start<=end){
            int mid=(start+end)/2;
            int rows=mid/col;
            int cols=mid%col;

            if(matrix[rows][cols]==target){
                return true;
            }
            else if(matrix[rows][cols]<target){
                start=mid+1;
            }
            else if(matrix[rows][cols]>target){
                end=mid-1;
            }
        }
        return false;
    }
}
