class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int j=0,k=0;
        for(int i=0;i<pushed.size();i++,k++){
            if(pushed[k]!=pushed[i]){
                pushed[k]=pushed[i];
            }
            while(k>=0 && pushed[k]==popped[j]){
                k--;
                j++;
            }
        }
        return k==0;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)
