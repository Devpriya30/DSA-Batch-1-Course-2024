//Day 5
//Question 28
//https://leetcode.com/problems/group-anagrams/

//Less optimized approach

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<string,vector<string>>hashtable;
        
        for(const string& s : strs){
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            hashtable[sorted].push_back(s);
        }
        
        vector<vector<string>>output;
        for(auto s : hashtable){
            vector<string>innerOutput;
            for(auto t : s.second){
                innerOutput.push_back(t);
            }
            output.push_back(innerOutput);
        }
        
        return output;
        
        
    }
};

//Okayish solution

class Solution {

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> hashtable;
        vector<vector<string>> output;
        for(string& str : strs){
            string anagram = str;
            sort(anagram.begin(),anagram.end());
            auto iter = hashtable.find(anagram);
            if(iter == hashtable.end()){
                hashtable.insert({anagram,output.size()});
                output.push_back({str});
            }else{
                output[iter->second].push_back(str);
            }
        }

        return output;
    }
};

//Optimized approach

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> hashtable;

    for(const string& s : strs){
        string sorted = s;
        sort(sorted.begin(), sorted.end());
        hashtable[sorted].push_back(s);
    }

    vector<vector<string>> result;
    for(const auto& pair : hashtable){
        result.push_back(pair.second);
    }
    
    return result;
        
        
    }
};

