//Day 7
//Question 38
//https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        if(intervals.size()<=1) return intervals;
        for(int i=0;i<intervals.size();i++){
            int start=intervals[i][0];
            int end = intervals[i][1];
            if(ans.empty() || intervals[i][0]> ans.back()[1]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
        }
};

//Time Complexity -> O(n); 
