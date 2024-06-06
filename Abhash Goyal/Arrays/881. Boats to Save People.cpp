class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count=0;
        sort(people.begin(),people.end());

        int high=people.size()-1;
        int low=0;
        while(low<=high){
            if((people[low]+people[high]) > limit){
                count++;
                high--;
            }
            else{
                low++;
                high--;
                count++;
            }
        }
        return count;
        
    }
};