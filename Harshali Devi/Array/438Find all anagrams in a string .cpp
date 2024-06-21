//Day 10
//Question 44
//https://leetcode.com/problems/find-all-anagrams-in-a-string/

//Method 1
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>indexes;
        if (s.size() < p.size()) return indexes;
        vector<int>alpha(26,0);
        for(auto i : p){
            alpha[i - 'a']++;
        }

        int left=0;
        int right=0;

        vector<int>check(26,0);

        //first window
        while(right<p.size()){
            check[s[right]-'a']++;
            right++;
        }
        
        //check first window
        if (check == alpha) {
            indexes.push_back(left);
        }

        //rest windows
        while(right<s.size()){
                check[s[left] - 'a']--;
                check[s[right] - 'a']++;
                left++;
                right++;

                if(check==alpha){
                    indexes.push_back(left);
                }
        }

        return indexes;
    }
};


//Optimized Solution -> adjust wt when difference is diff
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (s.size() < p.size()) return vector<int>{};

        int diff = 0;
        vector<int> vp(26);                        //vp -> vector of p
        for (auto c : p) vp[c - 'a']++;

        vector<int> vs(26);
        for (int i = 0; i < p.size(); i++) vs[s[i] - 'a']++;
        
        for (int i = 0; i < 26; i++) if (vs[i] != vp[i]) diff++;

        vector<int> ans;
        if (diff == 0) ans.push_back(0);

        for (int i = p.size(); i < s.size(); i++) {
            vs[s[i] - 'a']++, vs[s[i - p.size()] - 'a']--;

            if (s[i] != s[i - p.size()]) {
                if (vs[s[i] - 'a'] == vp[s[i] - 'a']) diff--;
                else if (vs[s[i] - 'a'] == vp[s[i] - 'a'] + 1) diff++;

                if (vs[s[i - p.size()] - 'a'] == vp[s[i - p.size()] - 'a']) diff--;
                else if (vs[s[i - p.size()] - 'a'] == vp[s[i - p.size()] - 'a'] - 1) diff++;
            }

            if (diff == 0) ans.push_back(i - p.size() + 1);
        }

        return ans;
    }
};
