class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
        return true;
        else
        return false;
    }
};
time complexity:O(nlogn)
space complexity:O(1)
