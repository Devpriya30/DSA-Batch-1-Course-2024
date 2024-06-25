class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        int m=accounts.size();
        int n=accounts[0].size();
        vector<int> val(m,0);
        for(int i=0;i<m;i++)
        {
            sum=0;
            for(int j=0;j<n;j++)
            {
                sum+=accounts[i][j];
            }
            val[i]=sum;
        }
        return *max_element(val.begin(),val.end());
    }
};

Time Complexity : O(m*n)
Space Complexity : O(m)
