class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        bool checkrow=false;
        bool checkcol=false;
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0]==0)
                checkrow=true;
        }
        for(int i=0;i<m;i++)
        {
            if(matrix[0][i]==0)
                checkcol=true;
        }
        for(int r=1;r<n;r++)
        {
            for(int c=1;c<m;c++)
            {   
                if(matrix[r][c]==0)
                {
                    matrix[r][0]=0;
                    matrix[0][c]=0;
                }
            }
        }
        for(int r=1;r<n;r++)
        {
                if(matrix[r][0]==0)
                {
                    for(int c=0;c<m;c++)
                    {
                       matrix[r][c]=0;
                    }
                }
        }
        for(int r=1;r<m;r++)
               {
                   if(matrix[0][r]==0)
                   {
                       for(int c=0;c<n;c++)
                      {
                       matrix[c][r]=0;
                       }
                       }
                   }

        if (checkrow==true)
        { for(int r=0;r<n;r++)
            {
                    matrix[r][0]=0; 
                
            }}
          if (checkcol==true)
          { for(int c=0;c<m;c++)
            {
               
                    matrix[0][c]=0;
                }
            }
      
    }
};


time complexity: O(n^2)
  space complexity:O(1)
