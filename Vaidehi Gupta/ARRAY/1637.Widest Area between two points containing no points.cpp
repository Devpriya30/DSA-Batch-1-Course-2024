class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int c=0,j;
      sort(points.begin(),points.end());
      for(int i=0;i<points.size()-1;i++)
      {
       j=points[i+1][0]-points[i][0];
       c=max(c,j);
      }
      return c;
    }
};

time complexity:O(n)
space complexity:O(1)
