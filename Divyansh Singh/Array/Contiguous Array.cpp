class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int>mpp;
        mpp[0]=-1;
        int sum=0,i=0,n=nums.size(),mL=0;
        while(i<n){
            if(nums[i]==1){
                sum=sum+nums[i];
                if(mpp.find(sum)!=mpp.end()){
                mL=max(mL,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
            }
            else{
                sum=sum-1;
                if(mpp.find(sum)!=mpp.end()){
                mL=max(mL,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
            }
            i++;
            
        }
        return mL;
    }
};
