class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        for(int n:nums)
        {
            if(i!=n)
                return i;
            i++;
        }
        return i;
    }
};

Time Complexity : O(n log n)
Space Complexity : O(1)


//Using sum logic
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,n=nums.size();
        for(int i=0;i<n;i++)
            sum+=nums[i];
        int total=(n*(n+1))/2;
        return (total-sum);
    }
};

Time Complexity : O(n)
Space Complexity : O(1)
