//Daily Problem
//https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/

class Solution {
public:
    bool check(const vector<int>& bloomDay, int m, int k, int mid) {
        int count = 0;  // Current number of consecutive flowers that can be picked
        int totalCount = 0;  // Total number of bouquets formed
        
        for (int day : bloomDay) {
            if (day <= mid) {
                count++;
                if (count == k) {
                    totalCount++;
                    count = 0;  // Reset count after forming a bouquet
                    if (totalCount >= m) return true;
                }
            } else {
                count = 0;  // Reset count if the current flower cannot be picked
            }
        }
        
        return false;  // Not enough bouquets can be formed
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size()) return -1;  // If there aren't enough flowers

        int left = *min_element(bloomDay.begin(), bloomDay.end());
        int right = *max_element(bloomDay.begin(), bloomDay.end());
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (check(bloomDay, m, k, mid)) {
                right = mid;  // Try for fewer days
            } else {
                left = mid + 1;  // Increase the number of days
            }
        }

        return left;
    }
};
