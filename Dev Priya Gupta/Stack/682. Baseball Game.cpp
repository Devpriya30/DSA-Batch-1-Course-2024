class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        int a=0,b=0;
        int n=operations.size();
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            if(operations[i]=="+")
            {
                a=s.top();
                s.pop();
                b=s.top()+a;
                s.push(a);
                s.push(b);
            }
            else if(operations[i]=="D")
                s.push(s.top()*2);
            else if(operations[i]=="C")
                s.pop();
            else
                s.push(stoi(operations[i]));
        }
        while(!s.empty())
        {
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};

Time Complexity : O(n)
Space Complexity : O(n)
