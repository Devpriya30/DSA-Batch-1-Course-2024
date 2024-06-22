class RecentCounter {
public:
queue<int>request;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        request.push(t);
        while(request.front()<(t-3000)){
            request.pop();
        }
        return request.size();
    }
};

TIME COMPLEXITY : O(1)
SPACE COMPLEXITY : O(1)
