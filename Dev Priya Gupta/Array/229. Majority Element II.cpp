class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int m1=0,c1=0,m2=0,c2=0;
        for(int i:nums)
        {
            if(m1==i)
                c1++;
            else if(m2==i)
                c2++;
            else if(c1==0)
            {
                m1=i;
                c1=1;
            }
            else if(c2==0)
            {
                m2=i;
                c2=1;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        int n=nums.size()/3;
        c1=0;
        c2=0;
        vector<int> res;
        for(int i:nums)
        {
            if(m1==i)
                c1++;
            else if(m2==i)
                c2++;    
        }
        if(c1>n)
            res.push_back(m1);
        if(c2>n)
            res.push_back(m2);
        return res;
    }
};

Time Complexity : O(n)
Space Complexity : O(1)
