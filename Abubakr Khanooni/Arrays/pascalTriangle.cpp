class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        for(int i=0;i<numRows;i++){
            vector<int>ans(i+1,1);
            if(i>1){
                for(int j=1;j<i;j++){
                    ans[j]=result[i-1][j]+result[i-1][j-1];
                }
            }
            result.push_back(ans);
        }
        return result;
    }
};