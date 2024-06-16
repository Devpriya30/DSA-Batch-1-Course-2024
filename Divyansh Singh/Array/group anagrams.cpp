class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        
        map<string , vector<string>>mpp;
        
        
        for(int i=0;i<strs.size();i++){
            
            string s=strs[i];
            sort(s.begin(),s.end());
            if (mpp.find(s)!=mpp.end()){
                vector<string>p;
                p=mpp[s];
                p.push_back(strs[i]);
                mpp[s]=p;
                
            }
            
            
            else{
                
                vector<string>p;
                p.push_back(strs[i]);
                mpp[s]=p;
                
            }
        }
        
        
        for(auto itr:mpp){
            ans.push_back(itr.second);
        }
        
        return ans;
    }
};
