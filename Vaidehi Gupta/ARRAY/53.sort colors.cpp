class Solution {
public:
    void sortColors(vector<int>& nums) {
     
        //DUTCH NATIONAL ALGORITHM
        int i=0,e=nums.size()-1,s=0;
        while(i<=e)
        {
            if(nums[i]==0)
            {
                swap(nums[s],nums[i]);
                s++;
               i++;
            }
            else if(nums[i]==1)
            {
                i++;
            }
            else
            {
                swap(nums[e],nums[i]);
                e--;
            }
        }
        
    }
};


time complexity:O(n)
space complexitu:O(1)
