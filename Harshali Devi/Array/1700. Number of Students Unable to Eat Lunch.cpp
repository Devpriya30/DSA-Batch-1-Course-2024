//Day 2
//Question 16
//https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int circular = 0;
        int rectangular = 0;

        // Count the initial number of students wanting circular and rectangular sandwiches
        for(auto s : students) {
            if(s == 0) {
                circular++;
            } else if(s == 1) {
                rectangular++;
            }
        }

        // Iterate through the sandwiches
        for(auto s : sandwiches) {
            if(s == 0) {
                if(circular > 0) {
                    circular--;
                } else {
                    // No students want a circular sandwich, stop here
                    break;
                }
            } else {
                if(rectangular > 0) {
                    rectangular--;
                } else {
                    // No students want a rectangular sandwich, stop here
                    break;
                }
            }
        }

        // The number of students who cannot eat is the remaining count of sandwiches
        return circular + rectangular;
    }
};
