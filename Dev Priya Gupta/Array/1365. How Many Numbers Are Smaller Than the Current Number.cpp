/// brute force approach
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,0);
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(nums[i]>nums[j])
                    res[i]++;
            }
        }
        return res;
    }
};

Time Complexity : O(n^2)
Space Complexity : O(n)


/// optimised code
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(101,0);
        int n = nums.size();
        for (int i = 0; i < n; i++) 
            count[nums[i]]++;
    
        for (int i = 1; i <= 100; i++) 
            count[i] += count[i - 1];
        
        vector<int> res(n);
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                res[i] = 0;
            } else {
                res[i] = count[nums[i] - 1];
            }
        }
        
        return res;
    }
};

Time Complexity : O(n)
Space Complexity : O(101) + O(n) = O(n)
