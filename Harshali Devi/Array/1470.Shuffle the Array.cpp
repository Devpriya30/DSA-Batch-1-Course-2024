//Day 1
//Question 3
//https://leetcode.com/problems/shuffle-the-array/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int n1 = 2*n;
        int half = n1/2;
        vector <int> output(n1);
        int i=0;
        int j = half;
        int k =0;
        while(i<half && j<n1){
            output[k]=nums[i];
            output[k+1]=nums[j];
            k=k+2;
            i++;
            j++;
        }
        return output;
    }
};

//Time Complexity -> O(n)
