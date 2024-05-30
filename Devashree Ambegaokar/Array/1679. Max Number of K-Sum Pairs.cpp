class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        int count =0;
        for(int num :nums){
            mp[num]++;
        }
        for(int num : nums){
            int compliment =  k-num;
            if(mp[num]>0 && mp[compliment]>0){
                if(num== compliment && mp[num]<2){
                    continue;
                }
                mp[num]--;
                mp[compliment]--;
                count++;
            }
        }
       return count; 
    }
};