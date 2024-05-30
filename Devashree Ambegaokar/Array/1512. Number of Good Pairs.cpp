class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
           std::unordered_map<int, int> num_count;
    int good_pairs = 0;
    for (int num : nums) {
        if (num_count.find(num) != num_count.end()) {
    
            good_pairs += num_count[num];
            num_count[num] += 1;
        } else {
            
            num_count[num] = 1;
        }
    }

    return good_pairs;
    }
};