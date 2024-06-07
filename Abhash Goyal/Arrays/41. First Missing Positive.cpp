// class Solution {
// public:
//     int firstMissingPositive(vector<int>& arr) {

//         // set<int> st;
//         // int i = 1;
//         // for (auto x : nums) {
//         //     st.insert(x);
//         // }
//         // for (auto it : st) {
//         //     if (st.find(i) != st.end()) {
//         //         i++;
//         //     }
//         //     // else  return i;
//         // }
//         // return i;
//         int n = arr.size();

//         for(int i =0 ; i< n ; i++){
//             if( arr[i]  )
//         }
//         ////////////////////////////////////////Approch 2
//         for (int i = 0; i < n; i++) {
//             if (arr[i] <= 0) {
//                 arr[i] = n + 1;
//             }
//         }

//             for (int i = 0; i < n; i++) {
//                 int index = abs(arr[i]) - 1;
//                 if (index < n) {
//                     arr[index] *= -1;
//                 }
//             }

//             for (int i = 0; i < n; i++) {
//                 if (arr[i] > 0) {
//                     return i + 1;
//                 }
//             }
//             return n + 1;

//     }
        

//         // 1. check for 1
//         // 2. check for nums<0 and nums> num.lenght
//         // 3. traverse the aray and make it negavitve if it is present in itl
//     };
class Solution {
public:
    // time/space: O(n)/O(1)
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        // discard the non-positive integers
        for (auto& num : nums) {
            if (num <= 0) num = n + 1;
        }

        // mark the visited integers as negative
        for (auto& num : nums) {
            int index = abs(num) - 1;
            if (index < n) nums[index] = -abs(nums[index]);
        }

        // find the smallest unvisited positive integer
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) return (i + 1);
        }
        return (n + 1);
    }
};