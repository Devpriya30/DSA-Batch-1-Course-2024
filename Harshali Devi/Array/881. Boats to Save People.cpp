//Day 7
//Question 37
//https://leetcode.com/problems/boats-to-save-people/

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());

        int left=0;
        int right=people.size()-1;
        int count=0;
        while (left <= right) {
            int ele = people[left] + people[right];
            if (ele > limit) {
                right--;
                count++;
            }
            else{
                left++;
                right--;
                count++;
            }
        }
        return count;
    }
};

//Time Complexity -> O(n)
