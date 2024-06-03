class Solution {
public:
    void sortColors(vector<int>& nums) {
        ///count sort
        vector<int> count(3,0);
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
            count[nums[i]]++;
        for(int i=0;i<3;i++)
        {
            int c=count[i];
            for(int j=1;j<=c;j++)
            {
                ans.push_back(i);
            }
        }
        nums=ans;
    }
};

Time Complexity : O(n)
Space Complexity : O(1)



///Dutch National flag algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,s=0,e=nums.size()-1;
        while(i<=e)
        {
            if(nums[i]==2)
            {
                swap(nums[i],nums[e]);
                e--;
            }
            else if(nums[i]==1)
            {
                i++;
            }
            else
            {
                swap(nums[i],nums[s]);
                s++;
                i++;
            }
        }
    }
};

Time Complexity : O(n)
Space Complexity : O(1)
