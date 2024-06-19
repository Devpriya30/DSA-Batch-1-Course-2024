class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<difficulty.size();i++){
            pq.push(make_pair(profit[i],difficulty[i]));
        }
        sort(worker.begin(),worker.end(),greater<int>());
        int i=0;
        int total_profit=0;
        while(i<worker.size() && !pq.empty()){
            if(pq.top().second>worker[i]){
                pq.pop();
            }
            else{
                total_profit+=pq.top().first;
                i++;
            }
        }
        return total_profit;
    }
};




class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size();
        int m = worker.size();
        vector<pair<int, int>> jobs;
        
        for(int i = 0; i < n; i++) {
            jobs.push_back({difficulty[i], profit[i]});
        }
        sort(jobs.begin(), jobs.end());
        for(int i = 1; i < n; i++) {
            jobs[i].second = max(jobs[i].second, jobs[i - 1].second);
        }
        
        int totalProfit = 0;
        
        for(int i = 0; i < m; i++) {
            int w = worker[i];
            int l = 0;
            int r = n - 1;
            int maxProfit = 0;
            while(l <= r) {
                int mid = l + (r - l) / 2;
                if(jobs[mid].first <= w) {
                    maxProfit = jobs[mid].second;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            
            totalProfit += maxProfit;
        }
        
        return totalProfit;
    }
};



