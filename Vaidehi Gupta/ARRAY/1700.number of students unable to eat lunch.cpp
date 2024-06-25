
            class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
      int b=0,l=0,a=0;
       for(int i=0;i<students.size();i++)
       {
           if(students[i]==0)
               a++;
           else
               b++;
       }
        for(int i=0;i<students.size();i++)
       {
            if(sandwiches[i]==1&&b!=0)
            {
                l++;
                b--;
            }
          else if(sandwiches[i]==0&&a!=0)
            {
                l++;
                a--;
            }
            else if(sandwiches[i]==0&&a==0)
            break; 
           else
            break; 
        }
        return (sandwiches.size()-l);
    }
};



time complexity:O(n)
space complexituy:O(1)
