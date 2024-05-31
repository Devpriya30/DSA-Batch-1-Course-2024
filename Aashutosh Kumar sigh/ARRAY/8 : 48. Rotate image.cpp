class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(i>j){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        for(int k=0;k<matrix.size();k++){
            reverse(matrix[k].begin(),matrix[k].end());
        }
    }
};

TIME COMPLEXITY : O(n^2)
SPACE COMPLEXITY : O(1)
