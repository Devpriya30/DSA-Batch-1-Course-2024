class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (auto it : nums) {
            mp[it]++;
        }
        
        int count = 0;

        for (auto it : mp) {
            int occurrences = it.second;
            if (occurrences > 1) {
                count += (occurrences * (occurrences - 1)) / 2;
            }
        }
        
        return count;
    }
};
