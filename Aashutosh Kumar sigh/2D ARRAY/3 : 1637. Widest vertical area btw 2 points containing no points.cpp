class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int width=0;
        vector <int> v;
        for(int i=0;i<points.size();i++){
               v.push_back(points[i][0]);
        }
        sort(v.begin(),v.end());
        int arc;
        for(int j=1;j<v.size();j++){
              arc=v[j]-v[j-1];
              if(arc>=width)
              width=arc;
        }
        return width;
    }
};

TIME COMPLEXITY : O(n log n)
SPACE COMPLEXITY : O(n)
