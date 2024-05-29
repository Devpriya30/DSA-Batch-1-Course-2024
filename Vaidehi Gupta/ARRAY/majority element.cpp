class Solution {
public:
    int majorityElement(vector<int>& nums) {
       map<int,int>mp;
       for(int i=0;i<nums.size();i++)
       {
        mp[nums[i]]++;
       } 
       int m=(nums.size()/2)+1;int n;
       for (auto i = mp.begin(); i != mp.end(); i++) 
       {
        if(i->second>=m)
        n= i->first;
        
       }

    return n;
    }
};

time complexity:O(n)
space complexity:O(n)
