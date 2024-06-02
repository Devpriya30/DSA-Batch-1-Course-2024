//Day 5
//Question 26
//https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

//Approach 1

#include <numeric> //for accumulate
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        if(k==n){
            return accumulate(cardPoints.begin(),cardPoints.end(),0);
        }
        
        int left=k-1;
        int right=n-1;
        
        int totalsum= accumulate(cardPoints.begin(),cardPoints.begin()+k,0);
        int maxsum = totalsum;
        
        while(left>=0){
            totalsum = totalsum - cardPoints[left] + cardPoints[right];
            maxsum = max(maxsum, totalsum);
            left--;
            right--;
            
        }
        
        return maxsum;
    }
};

//Time Complexity -> O(2*k)

//Approach 2

#include <numeric> //for accumulate
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        if(k==n){
            return accumulate(cardPoints.begin(),cardPoints.end(),0);
        }
        
        int left=k-1;
        int right=n-1;
        
        int totalsum= accumulate(cardPoints.begin(),cardPoints.begin()+k,0);
        int maxsum = totalsum;
        
        for (int i = 0; i < k; ++i) {
            totalsum = totalsum - cardPoints[k - 1 - i] + cardPoints[n - 1 - i];
            maxsum = max(maxsum, totalsum);
        }
        
        return maxsum;
    }
};

//General Advice
//While it doesn't matter in this specific case, using pre-increment (++i) can be a good habit in performance-critical code,
//particularly when dealing with more complex types like iterators in C++. (as compared to i++)
