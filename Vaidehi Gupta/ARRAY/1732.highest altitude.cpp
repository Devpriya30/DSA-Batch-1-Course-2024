class Solution {
public:
    
    int largestAltitude(vector<int>& gain) {
      vector<int>a;
        int sum=0;
        a.push_back(0);
        for(int i=0;i<gain.size();i++)
        {
            sum+=gain[i];
           a.push_back(sum);
            
        }
        sort(a.begin(),a.end());
         int c=a[gain.size()];
        return c;
    }
};


time complexity: O(n);
space complexity: O(n);
