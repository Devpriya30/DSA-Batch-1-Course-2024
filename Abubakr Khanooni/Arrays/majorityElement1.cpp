class Solution {
public:
    int majorityElement(vector<int>& nums) {//majority vote algorithm
        int n=nums.size();
        int votes=0;
        int candidate=-1;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(votes==0)
            {
                candidate=nums[i];
                votes++;
            }else{
                if(nums[i]==candidate)
                {
                    votes++;
                }
                else{
                    votes--;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==candidate)
            {
                count++;
            }
        }
        if(count>n/2){
            return candidate;
        }
        return -1;
        
    }
};