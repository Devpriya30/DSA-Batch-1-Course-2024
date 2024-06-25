class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,majority=0;
        for(auto i:nums){
            if(count==0){
                majority=i;
                count=1;
            }
            else if(i==majority){
                count++;
            }
            else{
                count--;
            }
        }
        return majority;
    }
};
