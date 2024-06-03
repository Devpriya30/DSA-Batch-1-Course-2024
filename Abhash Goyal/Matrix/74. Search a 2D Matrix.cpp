class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = matrix.size();        
        int col = matrix[0].size();

        if(matrix.empty() || matrix[0].empty()) return false;

        for(int i = 0 ; i < row ; i++){

            for(int j = 0 ; j < col ;j++){

                if(matrix[i][j]==target) return true;
            }
         }
    return false; 
             
    }
};
// APRROCH 2 Binary search

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = 0 ;
        int col = matrix[row].size() - 1; 

        if(matrix.empty() || matrix[0].empty()) return false;
       
        while( row < matrix.size() && col >=0 ){
            if(matrix[row][col]==target){
                return true;
            }

            if(matrix[row][col]< target){
                row++;
            }
            else{
                col--;
            }
        }
            return false; 
             
    }
};