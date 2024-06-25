class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        stack<int> stack;
        for(int i=n-1;i>=0;i--)
        {
            while((!stack.empty()) && (stack.top()>prices[i])){
                stack.pop();
            }
            int a=(stack.empty())?0:stack.top();
            stack.push(prices[i]);
            prices[i]-=a;
        }
        return prices;
    }
};

Time Complexity : O(n)
Space Complexity : O(n)
