class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
       int count0=0;
       int count1=0;

       for(int i=0;i<students.size();i++){
           if(students[i]==0){
            count0++;
           }
           else{
            count1++;
           }
       }

       for(int i=0;i<sandwiches.size();i++){
           
           if(count0==0 && sandwiches[i]==0  || count1==0 && sandwiches[i]==1){
               return sandwiches.size()-i;
           }
           if(sandwiches[i]==0 && count0>0){
            count0--;
           }
           else if(sandwiches[i]==1 && count1>0){
            count1--;
           }

           
       }

          return 0; 
      
    }
};
        
    //TC - O (n+n)
    //SC - O(1)
