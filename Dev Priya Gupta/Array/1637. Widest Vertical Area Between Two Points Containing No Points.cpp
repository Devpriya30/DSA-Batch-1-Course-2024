class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n=points.size();
        vector<int> val(n,0);
        for(int i=0;i<n;i++)   /// O(n)
            val[i]=points[i][0];
        sort(val.begin(),val.end());  /// O(nlog(n))
        int max=0;
        for(int i=0;i<n-1;i++)    /// O(n)
        {
            if(val[i+1]-val[i]>max)
                max=val[i+1]-val[i];
        }
        return max;
    }
};

Time Complexity : O(nlog(n))
Space Complexity : O(n)
