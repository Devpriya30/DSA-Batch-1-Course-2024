class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>a;
        map<string,vector<string >>mp;
        for(int i=0;i<strs.size();i++)
        {
            string w=strs[i];
            sort(w.begin(),w.end());
            mp[w].push_back(strs[i]);
        }
        for(auto i=mp.begin();i!=mp.end();i++)
          {
              a.push_back(i->second);
          }
        return a;
    }
};

Time complexity: O(n)
space complexity: O(n)
