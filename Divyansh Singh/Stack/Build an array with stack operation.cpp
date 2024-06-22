class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>arr;
        int j=0, l=target.size()-1;
        int max=target[l];
        for(int i=1;i<=n && j<l+1;i++){
            if(target[j]==i){
                arr.push_back("Push");
                j++;
            }
            else if(i<=max){
                arr.push_back("Push");
                arr.push_back("Pop");
            }


        }
        return arr;
    }
};
