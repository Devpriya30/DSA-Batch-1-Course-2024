class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
      int range =grid.size()*grid.size();
      vector<int>res(range+1,0);
      vector<int>a(2,0);
      int k=1;
      for(int i=0;i<grid.size();i++)
      {
        for(int j=0;j<grid[0].size();j++)
        {
            res[grid[i][j]]++;
        }
      } 
      int i=1;
        while(i<range+1)
      {
        if(res[i]==0)
           a[1]=i;
           if(res[i]==2)
           a[0]=i;
           i++;
      }

    return a;

    }
};
time complexity:O(n^2)
  space complexity:O(n)
