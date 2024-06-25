//Day 16
//Question 77
//https://leetcode.com/problems/time-needed-to-buy-tickets/description/

//Approach 1 -> Using queue

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int, int>> q;
        for (int i = 0; i < tickets.size(); ++i) {
            q.push({tickets[i], i});
        }

        int time = 0;

        while (!q.empty()) {
           pair<int,int>person = q.front();
           q.pop();
           person.first--;
           time++;
           if(person.second==k && person.first==0){
                return time;
           }
           if(person.first!=0){
            q.push(person);
           }
        }

        return -1; // Should never reach here if input is valid
    }
};


//Approach 2 -> One Pass

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        int time=0;

        for(int i=0;i<tickets.size();i++){
            if(i<=k){
                time+=min(tickets[i],tickets[k]);
            }
            else{
                if(tickets[k]>tickets[i]){
                    time+=tickets[i];
                }
                else{
                    time+=tickets[k]-1;
                }
            }
        }

        return time;
    }
};
