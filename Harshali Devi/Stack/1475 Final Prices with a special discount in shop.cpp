//Day 13
//Question 68
//https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/


//Method 1 -> To store the value in the stack

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        vector<int> discount(prices.size());

        for (int i = prices.size() - 1; i >= 0; --i) {
            // While stack is not empty and top of stack is greater than current price
            while (!st.empty() && st.top() > prices[i]) {
                st.pop();
            }
            // If stack is empty, no discount, otherwise use the top of the stack
            if (st.empty()) {
                discount[i] = prices[i];
            } else {
                discount[i] = prices[i] - st.top();
            }
            // Push current price onto the stack
            st.push(prices[i]);
        }

        return discount;
    }
};

//Method 2 -> To store the indices in the stack

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        vector<int> discount(prices); // Directly initialize with prices

        for (int i = 0; i < prices.size(); ++i) {
            // While stack is not empty and current price is less than or equal to the price at the top index of the stack
            while (!st.empty() && prices[st.top()] >= prices[i]) {
                int index = st.top();
                st.pop();
                discount[index] = prices[index] - prices[i];
            }
            // Push the current index onto the stack
            st.push(i);
        }

        return discount;
    }
};

//Method 3 -> Without use of extra vector

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        stack<int>st;

        for(int i=prices.size()-1;i>=0;i--){
            int temp=prices[i];
            while(!st.empty() && st.top()>prices[i]){
                st.pop();
            }
            if(st.empty()){
                prices[i]+=0;
            }
            else{
                prices[i]=prices[i]-st.top();
            }
            st.push(temp);
        }

        return prices;
    }
};
