class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        /*
        a= a+ (b%n)*n
        a=a%n
        b=a/n
        */
        for( int i = 0 ; i < n;i++){
            nums[i] = nums[i] + ( nums[nums[i]] % n) *n; 
        }
        
        for(int i = 0 ; i < n; i++){
            nums[i]=nums[i]/n;
            
        }
        return nums;
        
        
    }
};