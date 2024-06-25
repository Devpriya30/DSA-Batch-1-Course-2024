//Question 46
//Day 13
//https://leetcode.com/problems/subarray-sum-equals-k/description/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>hashtable;

        //IMP CONDITION
        hashtable[0]=1;

        int count=0;
        int currentSum=0;

        for(int num : nums){
            currentSum+=num;

            if(hashtable.find(currentSum-k)!=hashtable.end()){
                count+=hashtable[currentSum-k];
            }
            
            hashtable[currentSum]++;
        }

        return count;
    }
};
