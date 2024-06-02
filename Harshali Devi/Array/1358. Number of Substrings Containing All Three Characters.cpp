//Day 5
//Question 25
//https://leetcode.com/problems/number-of-substrings-containing-all-three-characters

//Not so effiecient approach
class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char,int>hashtable;
        int count=0;
        for(int i=0;i<s.size();i++){
            hashtable['a']=0;
            hashtable['b']=0;
            hashtable['c']=0;
            hashtable[s[i]]++;
            for(int j=i+1;j<s.size();j++){
                hashtable[s[j]]++;
                if(hashtable['a']>=1 && hashtable['b']>=1 && hashtable['c']>=1){
                    count++;
                }
            }
        }
        return count;
    }
};

//Time Complexity -> O(n**3)

//Sliding Window approach
class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        int left=0;
        int n=s.size();
        int a_count=0;
        int b_count=0;
        int c_count=0;
        for(int right=0;right<n;right++){
            if(s[right]=='a'){
                a_count++;
            }
            else if(s[right]=='b'){
                b_count++;
            }
            else if(s[right]=='c'){
                c_count++;
            }
            while(a_count>0 && b_count>0 && c_count>0){
                count +=n-right;
                if(s[left]=='a'){
                    a_count--;
                }
                else if(s[left]=='b'){
                    b_count--;
                }
                else if(s[left]=='c'){
                    c_count--;
                }
                left++;
            }
        }
        return count;
        
    }
};

//Time Complexity -> O(n**2)
