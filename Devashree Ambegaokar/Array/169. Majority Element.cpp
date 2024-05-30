class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int vote= 0;
        int majority;
        int count = 0;
        for(int i = 0; i<n; i++){
        if(vote == 0){
           majority = nums[i];
           vote++; 
        }
        else{
            if(majority == nums[i]){
                vote++;
            }
            else{
                vote--;
            }
        }
        }
       for(int i =0; i<n; i++){
        if(majority == nums[i]){
            count++;
        }
       }
       if(count>n/2){
        return majority;
       }
       return -1; 
    }
};

//time complexity = o(n) and space complexity = o(1)