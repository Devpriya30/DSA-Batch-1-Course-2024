//Day 16
//Question 78
//https://leetcode.com/problems/max-chunks-to-make-sorted/

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        int count = 0;
        int max_val = 0;

        for (int i = 0; i < arr.size(); ++i) {
            max_val = max(max_val, arr[i]);
            if (max_val == i) {                                    //i means until that position,it is already sorted . e.g i=2 and [1,2,9,8] means 2 is at correct position
                count++;
            }
        }

        return count;
    }
};

