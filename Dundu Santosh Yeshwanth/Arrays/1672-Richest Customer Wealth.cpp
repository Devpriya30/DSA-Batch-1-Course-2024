class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();

        int sum = 0;
        for(int i=0;i<n;i++){
            int sum2 = 0;
            for(int j=0;j<accounts[i].size();j++){
                sum2 += accounts[i][j];
            }
            sum = max(sum,sum2);
        }
        return sum;
    }
};
//Time Complexity - O(N*N)
//Space Complexity - O(1)
