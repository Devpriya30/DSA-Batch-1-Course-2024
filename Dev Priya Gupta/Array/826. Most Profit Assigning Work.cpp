class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n=difficulty.size();
        int c=INT_MIN,sum=0;
        vector<pair<int,int>> mat;
        for(int i=0;i<n;i++)
        {
            mat.push_back({difficulty[i],profit[i]});
        }
        sort(mat.begin(),mat.end());
        for(int i=0;i<n;i++)
        {
            c=max(c,mat[i].second);
            mat[i].second=c;
        }
        sort(worker.begin(),worker.end());
        n=n-1;
        for(int i=worker.size()-1;i>=0;i--)
        {
            while(n>=0 && mat[n].first>worker[i])
                n--;
            sum+=(n>=0)?mat[n].second:0;
        }
        return sum;
    }
};

Time Complexity : O(n log n)
Space Complexity : O(n)
