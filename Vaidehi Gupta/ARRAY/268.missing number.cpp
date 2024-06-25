class Solution {
public:
    int missingNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end()); int c=-1;
       int s=nums[0];
       for(int i=0;i<nums.size();i++)
        {
          if(nums[i]!=i)
           { c=i;break;}
        }
        if(c==-1)
        return nums.size();
        else 
       return c;
        
    }
};

time complexity:O(n)
space complexity:O(1)
