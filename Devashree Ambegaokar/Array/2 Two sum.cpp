class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> my_map;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (my_map.find(complement) != my_map.end()) //check karne ke liye if the number is in the array ya nahi
            {
                return {i, my_map[complement]}; 
            }
            my_map[nums[i]] = i;
        }
        return{};
    }
};