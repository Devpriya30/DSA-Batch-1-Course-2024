class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool isone=false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                isone=true;
                break;
            }
        }
        if(!isone)
            return 1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>nums.size() || nums[i]<=0)
                nums[i]=1;
        }
        for(int i=0;i<nums.size();i++)
        {
            int a=abs(nums[i]);
            if(a==nums.size())
                a=0;
            if(nums[a]>=0)
                nums[a]=-abs(nums[a]);
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>0)
                return i;
        }
        if(nums[0]>0)
            return nums.size();
        else
            return nums.size()+1;
    }
};

Time Complexity : O(n)
Space Complexity : O(1)


//optimised
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for (auto& num : nums) {
            if (num <= 0) num = n + 1;
        }

        for (auto& num : nums) {
            int index = abs(num) - 1;
            if (index < n) nums[index] = -abs(nums[index]);
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) return (i + 1);
        }
        return (n + 1);
    }
};
