class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current = 0,max1=0;
        for(int i=0;i<gain.size();i++){
            current += gain[i];
            max1 = max(max1,current);
        }
        return max1;
    }
};
//Time Complexity - O(N)
//Space Complexity- O(1)
