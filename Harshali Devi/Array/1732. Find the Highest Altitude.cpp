//Day 1
//Question 12
//https://leetcode.com/problems/find-the-highest-altitude/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int count = 0;
        int val=0;
        for(int i=0;i<gain.size();i++){
            val+=gain[i];
            count = max(val,count);
        }
        return count;
    }
};

//Time Complexity -> O(n);
