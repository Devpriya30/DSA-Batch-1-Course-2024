class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int>mpp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            int val=k-nums[i];
            if(mpp[val]>0){
                mpp[val]--;
                count++;

            }
            else{
                mpp[nums[i]]++;
            }
        }
        return count;
    }
};
