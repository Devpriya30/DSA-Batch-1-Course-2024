//Day 15
//Question 72
//https://leetcode.com/problems/baseball-game/description/

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int output=0;

        stack<int>ops;

        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                if(!ops.empty()){
                    ops.pop();
                }
            }
            else if(operations[i]=="D"){
                if (!ops.empty()) {
                    int val = ops.top();
                    ops.push(val * 2);
                }
            }
            else if(operations[i]=="+"){
                if (ops.size() >= 2) {
                    int one = ops.top();
                    ops.pop();
                    int two = ops.top();
                    ops.pop();
                    int num = one + two;
                    ops.push(two); // Push back the second element
                    ops.push(one);  // Push back the first element
                    ops.push(num);   // Push the sum
                }
            }
            else{
                ops.push(std::stoi(operations[i]));
            }
        }
        
        while(!ops.empty()){
            output+=ops.top();
            ops.pop();
        }

        return output;
    }
};
