//Day 5
//Question 27
//https://leetcode.com/problems/get-equal-substrings-within-budget/

#include <string>
#include <algorithm>  // for std::max
#include <cmath>      // for std::abs
using namespace std;

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int diffsum = 0;
        int maxLength = 0;
        int start = 0;

        for (int end = 0; end < s.size(); end++) {
            diffsum += abs(s[end] - t[end]);

            // Adjust the window if the cost exceeds maxCost
            while (diffsum > maxCost) {
                diffsum -= abs(s[start] - t[start]);
                start++;
            }

            // Update the maximum length of the substring
            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};


//Time Complexity -> O(n)
