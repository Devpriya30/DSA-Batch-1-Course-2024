class Solution {
public:
    
    int largestAltitude(vector<int>& gain) {
        
        int sum=0;
        gain.insert(gain.begin(),0);
        for(int i=0;i<gain.size();i++)
        {
            sum+=gain[i];
          gain[i]=sum;
            
        }
        sort(gain.begin(),gain.end());
         int c=gain[gain.size()-1];
        return c;
    }
};

time complexity: O(n);
space complexity: O(1);
