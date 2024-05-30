//OPTIMAL SOLUTION


class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count=1;
        int m=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(count==0)
                m=nums[i];
            if(m==nums[i])
                count++;
            else
                count--;
        }
    return m;
    }
};


time cpmlexity:O(n)
space cpmlexity:O(1)
