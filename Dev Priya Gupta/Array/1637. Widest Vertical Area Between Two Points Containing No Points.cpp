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

//reduced space Complexity
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n=points.size();
        sort(points.begin(),points.end());
        int max=0;
        for(int i=0;i<n-1;i++)
        {
            int c=points[i+1][0]-points[i][0];
            if(max<c)
                max=c;
        }
        return max;
    }
};

Time Complexity : O(nlog(n))
Space Complexity : O(1)
