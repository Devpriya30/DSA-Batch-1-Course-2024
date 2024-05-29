class Solution {
public:
    int countStudents(vector<int>& student, vector<int>& sandwich) {
        int n, cir=0, sq=0,i;
        n=student.size();
        for(i=0;i<n;i++)   ///counting the number of students who want square and circular sandwiches
        {
            if(student[i]==0)
                cir++;
            else
                sq++;
        }
        for(i=0;i<n;i++)   ///Subtracting the sandwiches one by one
        {
            if(sandwich[i]==0&&cir>0)
                cir--;
            else if(sandwich[i]==1&&sq>0)
                sq--;
            else
            {
                n=n-i;
                break;
            }
        }
        if(cir==0&&sq==0)
          n=0;
        return n;
    }
};

Time Complexity : O(n) + O(n) = O(n)
Space Complexity : O(1)  //Since no extra space is used
