class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                if (st.size() >= 2) {
                    int first = st.top();
                    st.pop();
                    int second = st.top();
                    st.pop();
                    int res = first + second;
                    st.push(second); 
                    st.push(first); 
                    st.push(res);
                }
            } else if (operations[i] == "D") {
                st.push(st.top() * 2);
            } else if (operations[i] == "C") {
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(stoi(operations[i]));
            }
        }
        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};
