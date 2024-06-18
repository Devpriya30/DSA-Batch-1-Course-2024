class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector <int> v;
        int score=0,j=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                if(v.size()==0)
                v.push_back(0);
                else if(v.size()==1)
                v.push_back(v[0]);
                else
                v.push_back(v[j-1]+v[j-2]);
                j++;
            }
            else if(operations[i]=="D"){
                if(v.size()==0){
                    v.push_back(0);
                    j++;
                }
                else{
                    v.push_back(2*v[j-1]);
                    j++;
                }
            }
            else if(operations[i]=="C"){
                v.pop_back();
                j--;
            }
            else{
                int x=stoi(operations[i]);
                v.push_back(x);
                j++;
            }
        }
        for(int k=0;k<v.size();k++)
        score+=v[k];
        return score;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(n)
