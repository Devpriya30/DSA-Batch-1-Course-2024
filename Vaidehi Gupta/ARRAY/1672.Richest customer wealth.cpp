class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
      
      int sum=0,c=0;
      int l=accounts.size();
     for(int i=0;i<l;i++)
     {
        for(int j=0;j<accounts[0].size();j++)
        {
            sum+=accounts[i][j];
        }
        c=max(c,sum);
        sum=0;
        
     }
      return c;
    }
};



TIME COMPLEXITY:O(N^2)
  SPACE COMPLEXITY :O(1)
