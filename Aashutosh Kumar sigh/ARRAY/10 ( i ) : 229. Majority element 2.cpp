class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector <int> v;
        int i;
        int n1=(nums.size())/3;
        int count=0;
        if(nums.size()==1)
        return nums;
        if(nums.size()==2){
            if(nums[0]==nums[1])
            return {nums[0]};
            return nums;
        }
        
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
            else{
                if(count>=n1)
                v.push_back(nums[i-1]);
                count=0;
            }
        }
        if(count>=n1)
        v.push_back(nums[i-1]);
        return v;
    }
};

TIME COMPLEXITY : O(nlogn)
SPACE COMPLEXITY : O(1)
