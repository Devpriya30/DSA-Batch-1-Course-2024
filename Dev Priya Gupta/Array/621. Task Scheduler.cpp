class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
        for(int i=0;i<tasks.size();i++)
            freq[tasks[i]-'A']++;
        sort(freq.begin(),freq.end());
        int gap=freq[25]-1;
        int totalgap=gap*n;
        int res=freq[25]+totalgap;
        int i=24;
        while(i>=0)
        {
            if(freq[i]>gap)
                res+=freq[i]-gap;
            totalgap-=min(gap,freq[i]);
            i--;
        }
        if(totalgap>0)
            return res;
        return tasks.size();
    }
};

Time Complexity : O(n log n)
Space Complexity : O(1)
