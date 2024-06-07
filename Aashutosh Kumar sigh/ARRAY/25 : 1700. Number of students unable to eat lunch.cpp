class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int num1=0,num0=0;
        for(int i=0;i<students.size();i++){
            if(students[i]==0)
            num0++;
            else
            num1++;
        }
        int n=0,size=sandwiches.size();
        for(int j=0;j<sandwiches.size();j++){
            if(sandwiches[j]==1){
                if(num1==0)
                return size-n;
                else{
                    n++;
                    num1--;
                }
            }
            else if(sandwiches[j]==0){
                if(num0==0)
                return size-n;
                else{
                    n++;
                    num0--;
                }
            }
        }
        return size-n;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)
