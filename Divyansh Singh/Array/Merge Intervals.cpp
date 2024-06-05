class Solution {
private:
   void sorting(vector<vector<int>>& intervals){
    vector<int>p;
    for(int i=0;i<intervals.size();i++){
        p.push_back(intervals[i][1]);
    }
    sort(p.begin(),p.end());
    for(int i=0;i<intervals.size();i++){
        intervals[i][1]=p[i];
    }

   }
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        sorting(intervals);
        vector<vector<int>>ans;
        int s=intervals[0][0],e=intervals[0][1],i=1;
        vector<int>p;
        while(i<intervals.size()){
            if(intervals[i-1][1]>=intervals[i][0]){
                e=intervals[i][1];
                i++;
            }

            else{
                p.push_back(s);
                p.push_back(e);
                ans.push_back(p);
                p={};
                s=intervals[i][0];
                e=intervals[i][1];
                i++;
            }
        }
        p.push_back(s);
        p.push_back(e);
        ans.push_back(p);
        return ans;

    }
};
