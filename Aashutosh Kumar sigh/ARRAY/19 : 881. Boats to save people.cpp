class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0;
        int j=people.size()-1;
        int count=0;
        while(i<=j){
            if((people[i]+people[j])>limit){
                count++;
                j--;
            }
            else{
                count++;
                i++;
                j--;
            }
        }
        return count;
    }
};

TIME COMPLEXITY : O(n log n) //sorting
SPACE COMPLEXITY : O(1)
