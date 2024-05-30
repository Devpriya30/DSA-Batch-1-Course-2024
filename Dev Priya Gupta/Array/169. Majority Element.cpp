//Using sorting
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};

Time Complexity : O(n log(n))
Space Complexity : O(1)

//Boyer-Moore Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m=nums[0];
        int c=1;
        for(int i=1;i<nums.size();i++)
        {
            if(c==0)
            {
                m=nums[i];
                c=1;
            }
            else if(m==nums[i])
                c++;
            else
                c--;
        }
        return m;
    }
};

Time Complexity : O(n)
Space Complexity : O(1)
