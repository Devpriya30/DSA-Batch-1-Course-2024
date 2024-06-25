//Day 5
//Question 30
//https://leetcode.com/problems/next-permutation/

//Approach 1 -> Using built-in function next_permuation

class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
        // Find the next lexicographically greater permutation
        bool has_next_permutation = next_permutation(nums.begin(), nums.end());
        
        // If there's no next permutation, rearrange to the first (sorted) permutation
        if (!has_next_permutation) {
            std::sort(nums.begin(), nums.end());
        }
    }
};

//Approach 2
class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int n = A.size();

        int ind = -1; //break pt
        for(int i=n-2;i>=0;i--){
            if(A[i]<A[i+1]){
                ind=i;
                break;
            }
        }

        //If no break pt
        if(ind==-1){
            reverse(A.begin(),A.end());
        }
        else{
            //Find next greater ele and swap
            for(int i=n-1;i>ind;i--){
                if(A[i]>A[ind]){
                    swap(A[i],A[ind]);
                    break;
                }
            }

            //Reverse rest right of the vector
            reverse(A.begin()+ind+1,A.end());
        }

    }
};
