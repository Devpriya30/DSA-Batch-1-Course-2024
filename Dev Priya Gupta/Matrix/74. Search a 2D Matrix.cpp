class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int st=0,ed=m*n,r=0,c=0;
        while(st<=ed && st<m*n)
        {
            int mid=(st+ed)/2;
            r=mid/n;
            c=mid%n;
            if(matrix[r][c]==target)
                return true;
            else if(matrix[r][c]<target)
                st=mid+1;
            else
                ed=mid-1;
        }
        return false;
    }
};

Time Complexity : O(log(m*n)) // binary search
Space Complexity : O(1)
