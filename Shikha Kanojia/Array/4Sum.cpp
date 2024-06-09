
                               //  Method : 3 Using two pointers in nested loop and avoiding duplicates
                               // Most Optimal O(n^3)
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++){
            if( i != 0 && nums[i] == nums[i-1]) continue;        // to avoid duplicate
            for(int j = i+1; j < n; j++){
                if(j != i+1 && nums[j] == nums[j-1]) continue;   // to avoid duplicate
                // Using two pointer(2 Sum Approach)
                int k = j + 1;
                int l = n - 1;
                while(k<l){
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    // Got possible solution
                    if(sum == target){                          
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                    while (k < l && nums[k] == nums[k - 1]) k++;
                    while (k < l && nums[l] == nums[l + 1]) l--;    // to avoid duplicate
                    }
                    else if(sum < target) k++;
                    else l--;
                }
            }
        }
        return ans;
    }
};
    
