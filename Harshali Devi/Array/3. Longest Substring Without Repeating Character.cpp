//Day 3
//Question 24
//https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

//Approach 1 using map
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hashtable;
        int maxlen = 0;
        int start = 0;
        if (s.length() == 0 || s.length() == 1)
            return s.length();
        for(int i=0;i<s.size();i++){
            if(hashtable.find(s[i]) != hashtable.end()){
                start = max(start,hashtable[s[i]]+1);
            }
            hashtable[s[i]]=i;
            maxlen = max(maxlen,i-start+1);

        }
        return maxlen;
    }
};

//Time Complexity -> O(n)

//Approach 2 using the ascii values in array
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0 || s.length() == 1)
            return s.length();
        
        int arr[128] = {0}; // Initialize array to store last index of each character
        int maxlen = 0;
        int j = 0;
        
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (arr[c] > j) {
                j = arr[c];
            }
            maxlen = max(maxlen, i - j + 1);
            arr[c] = i + 1;
        }
        
        return maxlen;
    }
};
