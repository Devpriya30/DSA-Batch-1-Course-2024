class Solution {
public:
    std::vector<int> finalPrices(std::vector<int>& prices) {
        int n = prices.size();
        std::vector<int> ans(n, 0);
        std::stack<int> s;
        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && prices[s.top()] > prices[i]) {
                s.pop();
            }
            ans[i] = s.empty() ? 0 : prices[s.top()];
            s.push(i);
        }
        for (int i = 0; i < n; ++i) {
            prices[i] -= ans[i];
        }

        return prices;
    }
};
