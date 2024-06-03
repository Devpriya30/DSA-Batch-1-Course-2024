class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;

        for ( int i = 0 ; i < index.size();i++){
            // int temp=0;
            // temp=index[i];
            // target[temp]=nums[i];
            
            target.insert(target.begin() + index[i] , nums[i]);
        }
        return target;
        
    }
};