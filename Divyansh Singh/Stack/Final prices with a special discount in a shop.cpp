class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st;
        for(int i=prices.size()-1;i>=0;i--){
            if(st.empty()){
                st.push(prices[i]);
            }
            else{
                while((st.empty()==false) && (st.top()>prices[i])){
                    st.pop();
                }
                if(st.empty()==false){
                    int temp=prices[i]-st.top();
                    st.push(prices[i]);
                    prices[i]=temp;
                }
                else{
                    int temp=prices[i]-0;
                    st.push(prices[i]);
                    prices[i]=temp;
                }
            }
        }
        return prices;
    }
};
