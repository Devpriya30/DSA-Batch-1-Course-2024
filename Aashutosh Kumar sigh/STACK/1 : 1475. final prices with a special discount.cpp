class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>v;
        for(int i=prices.size()-1;i>=0;i--){
            while(!v.empty() && v.top()>prices[i]){
                v.pop();
            }
            int top =v.empty()?0:v.top();
            v.push(prices[i]);
            prices[i]-=top;
        }
        return prices;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(n)
