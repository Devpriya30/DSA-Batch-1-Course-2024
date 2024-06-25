class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            vector<char>vec(3,0);
            for(int j=i;j<s.size();j++){
                vec[s[j]-'a']=1;
                if(vec[0]+vec[1]+vec[2]==3){
                    count++;
                }
            }
        }
        return count;
    }
};

// n sqr tc n sc

class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> vec(3, -1);
        int count = 0;

        for (int i = 0; i < s.size(); ++i) {
            vec[s[i] - 'a'] = i; 
            count += 1 + min({vec[0], vec[1], vec[2]});
        }

        return count;
    }
};
