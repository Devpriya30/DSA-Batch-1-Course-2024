class Solution {
public:
    string shorty(string str){
        vector<int>ans(26,0);
        for(auto it:str){
            ans[it-'a']++;
        }
        string cop="";
        for(int i=0;i<26;i++){
            if(ans[i]>0){
                cop+=string(ans[i],i+'a');
            }
        }
        return cop;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>vec;
        for(int i=0;i<strs.size();i++){
            string copy=strs[i];
            string sorted_copy=shorty(copy);
            mp[sorted_copy].push_back(copy);
        }
        for(auto it:mp){
            vec.push_back(it.second);
        }
        return vec;
    }
};