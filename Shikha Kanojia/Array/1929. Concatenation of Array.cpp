class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0 ; i<n ; i++)

        {
           nums.push_back(nums[i]);
        }
        
        return nums;   
    }
};

// Time complexity: O(n)
// Space complexity: O(1)

// Iterate through the original array: Loop through the array from the first element to the last.
// Append elements to the array: During each iteration, append the current element to the end of the array.

//   vector<int> ans;
//         for (int i=0;i<nums.size();i++){
//             ans.push_back(nums[i]);
//         }
//         for(int i=0;i<nums.size();i++){
//             ans.push_back(nums[i]);
//         }
//         return ans;
//     }
// };

// Approach
// I've used two loops in which -
// first loop will fill the ans array with all values of nums;
// Ans in second loop copy again all nums values in ans array again ;
// Complexity
// Time complexity: O(n+n) = O(n)
// Space complexity: O(n)

