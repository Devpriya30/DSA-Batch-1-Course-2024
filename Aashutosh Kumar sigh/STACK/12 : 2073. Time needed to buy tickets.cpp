class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count=0;
        for(int i=0;i<tickets.size();i++){
            if(i<=k){
                if(tickets[i]<=tickets[k]){
                    count=count+tickets[i];
                }
                else{
                    count+=tickets[k];
                }
            }
            else{
                if(tickets[i]<tickets[k]){
                    count=count+tickets[i];
                }
                else{
                    count=count+tickets[k]-1;
                }
            }
        }
        return count;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)
