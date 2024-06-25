class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> res(n+1,0);
        for(int i=0;i<n;i++)
        {
            res[i+1]=res[i]+gain[i];
        }
        return *max_element(res.begin(),res.end());  /// Time complexity : O(n)
    }
};

Time Complexity : O(n)
Space Complexity : O(n+1)


/// Reduced space complexity
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        for(int i=1;i<gain.size();i++)
        {
            gain[i]+=gain[i-1];
        }
        int c=*max_element(gain.begin(),gain.end());
        if(c<0)
            return 0;
        else
            return c;
    }
};

Time Complexity : O(n)
Space Complexity : O(1)
