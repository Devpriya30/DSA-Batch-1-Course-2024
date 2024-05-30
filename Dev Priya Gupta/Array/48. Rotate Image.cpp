class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j,t=0;
        int n= matrix.size();
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
                swap(matrix[i][j],matrix[j][i]);
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

Time Complexity : O(n^2)
Space Complexity : O(1)

//using diiferent loops for reversing
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j,t=0;
        int n= matrix.size();
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

Time Complexity : O(n^2)
Space Complexity : O(1)
