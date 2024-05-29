class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int j=0,n=0;vector<int>a;
        for(int i=0;i<nums.size();i++)
        {
              
           if(nums[j]>nums[i])
            n++;
            if(i==nums.size()-1)
            {
                i=-1;
                j++;
                a.push_back(n);
                n=0;
            }
            if(j==nums.size())
              i=nums.size();
              
        }
       
        return a;
    }
       
};
time complexity:O(n)
space complexity:O(n)
