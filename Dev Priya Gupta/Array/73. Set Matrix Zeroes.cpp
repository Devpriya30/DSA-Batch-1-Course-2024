class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        bool isrow=false;
        bool iscol=false;

        //check for first column elements if any 0
        for(int r=0;r<m;r++){
            if(matrix[r][0]==0){
                isrow=true;
                break;
            }
        }

        //check for first row elements if any 0
        for(int c=0;c<n;c++){
            if(matrix[0][c]==0){
                iscol=true;
                break;
            }
        }

        //check from row 1 and column 1 for 0 element and make its top row and column 0
        for(int r=1;r<m;r++)
        {
            for(int c=1;c<n;c++)
            {
                if(matrix[r][c]==0)
                {
                    matrix[r][0]=0;
                    matrix[0][c]=0;
                }
            }
        }

        for(int r=1;r<m;r++)
        {
            if(matrix[r][0]==0)
            {
                for(int c=1;c<n;c++)
                    matrix[r][c]=0;
            }
        }

        for(int c=1;c<n;c++)
        {
            if(matrix[0][c]==0)
            {
                for(int r=1;r<m;r++)
                    matrix[r][c]=0;
            }
        }

        if(isrow)
        {
            for(int r=0;r<m;r++)
                matrix[r][0]=0;
        }

        if(iscol)
        {
            for(int c=0;c<n;c++)
                matrix[0][c]=0;
        }
    }
};

Time Complexity : O(m*n)
Space Complexity : O(1)
