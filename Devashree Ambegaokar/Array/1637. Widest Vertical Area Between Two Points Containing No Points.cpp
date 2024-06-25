class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(), points.end());
        int Maxarea = 0;
        for(int i =1; i<n; i++){
            int area = points[i][0] - points[i-1][0];
            Maxarea = max(Maxarea, area); 
        }
        return Maxarea;
    }
};
//Time Complexity = O(n logn) and space complexity = O(1)