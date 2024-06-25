class Solution {
public:
    int maxArea(vector<int>& heights) {

        int high = heights.size() - 1;
        int area = 0;
        int low = 0;

        while (low < high) {

            int curr_height = min(heights[low], heights[high]);
            int curr_width = high - low;
            int curr_area = curr_height * curr_width;

            area = max(area, curr_area);

            if (heights[low] < heights[high]) {
                low++;
            } else {
                high--;
            }
        }
        return area;
    }
};