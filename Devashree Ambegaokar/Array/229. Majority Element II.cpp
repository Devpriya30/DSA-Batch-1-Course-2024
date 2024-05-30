class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mymap;
        for(int i=0;i<nums.size();i++)
        {
            if(mymap.find(nums[i])==mymap.end())//matlab nhi hai map mai
            {
                mymap.insert({nums[i],1});//ek baar aagya
            }
            else{
                mymap[nums[i]]++;//increment the freq of the number
            }
        }
        
        set<int> myset;
        double b=nums.size()/3;
        for(int i=0;i<nums.size();i++)
        {
            if(mymap[nums[i]]>b)
            {
                myset.insert(nums[i]);
            }
        }
        vector<int> majority(myset.begin(),myset.end());
        return majority;
    }
};

//time and space complexity =o(n) 