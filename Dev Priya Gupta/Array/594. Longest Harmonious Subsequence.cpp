//using hashmap
class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> mp;
        int res=0;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        auto a=mp.begin();
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->first-a->first==1)
                res=max(res,(a->second+i->second));
            a=i;
        }
        return res;
    }
};

Time Complexity : O(n)
Space Complexity : O(2n)

//Using sorting
class Solution {
public:
    int findLHS(vector<int>& nums) {
        int l=0,r=1,res=0;
        sort(nums.begin(),nums.end());
        while(r<nums.size())
        {
            if(nums[r]-nums[l]==1)
                res=max(res,r-l+1);
            while(nums[r]-nums[l]>1)
                l++;
            r++;
        }
        return res;
    }
};

Time Complexity : O(n log n)
Space Complexity : O(1)
