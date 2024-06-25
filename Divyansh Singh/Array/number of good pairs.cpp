class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mpp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto i:mpp){
            if(i.second>1){
                int val=i.second*(i.second-1);
                count=count+val/2;
            }
        }
        return count;
    }
};
