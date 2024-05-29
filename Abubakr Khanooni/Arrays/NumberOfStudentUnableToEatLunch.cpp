class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for (int student : students) {
            q.push(student);
        }

        int count = 0;
        int i = 0;

        while (!q.empty() && count < q.size()) {
            if (q.front() == sandwiches[i]) {
                q.pop();
                i++;
                count = 0;
            } else {
                q.push(q.front());
                q.pop();
                count++;
            }
        }

        return q.size();
    }
};


//TC-O(n)
//SC-O(N)