class Solution {
public:
    string restoreString(string s, vector<int>& indices) {

        // vector<char> arr(s.size());
        
        // for(int i = 0 ; i < indices.size();i++){
        //     int temp;
        //     temp= indices[i];
        //     arr[temp]=s[i];  // value assigned
        // }
        
        //     string str(arr.begin(),arr.end());

        // return str;

//OPTIMISED APPROCH
        string final(s.size(),' ');
        for(int i = 0 ; i < indices.size();i++){
            final[indices[i]]=s[i];
        }
        return final;
    }
};