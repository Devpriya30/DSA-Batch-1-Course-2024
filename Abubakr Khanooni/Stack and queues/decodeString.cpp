class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;     
        stack<string> strStack;     
        string currentString = "";  
        int num = 0;                

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');  
            } 
            else if (c == '[') {
                numStack.push(num);         
                strStack.push(currentString); 
                num = 0;     
                currentString = ""; 
            } 
            else if (c == ']') {
                int repeatTimes = numStack.top();
                numStack.pop();

                string temp = currentString;
                currentString = strStack.top();
                strStack.pop();

                for (int i = 0; i < repeatTimes; ++i) {
                    currentString += temp; 
                }
            } 
            else {
                currentString += c; 
            }
        }

        return currentString;
    }
};
