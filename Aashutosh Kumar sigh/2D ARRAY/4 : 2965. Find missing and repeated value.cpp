class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>v;
        int first,second;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int sum=v[0];
        for(int i1=1;i1<v.size();i1++){
            if(v[i1]==v[i1-1])
            first=v[i1];
            sum+=v[i1];
        }
        sum=sum-first;
        int n=grid.size();
        int sumans=((n*n)*(n*n+1))/2;
        second=sumans-sum;
        return {first,second};
    }
};

TIME COMPLEXITY : O(n^2)
SPACE COMPLEXITY : O(n^2)
