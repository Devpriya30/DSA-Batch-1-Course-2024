class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> s1;
        int n1 = target.size();
        int max = target[n1 - 1];
        int j = 0; // slow pointer
        for (int i = 1; i <= max; i++) { 
            if (target[j] == i) {
                s1.push_back("Push");
                j++;
            } else {
                s1.push_back("Push");
                s1.push_back("Pop");
            }
        }
        return s1;
    }
};
