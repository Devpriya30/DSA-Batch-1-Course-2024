class CustomStack {
public:
    vector<int> result;
    int maxSize;
    
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }
    
    void push(int x) {
        if (result.size() < maxSize) {
            result.push_back(x);
        }
    }
    
    int pop() {
        if (result.size() > 0) {
            int last = result.back();
            result.pop_back();
            return last;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        for (int i = 0; i < result.size() && i < k; i++) {
            result[i] += val;
        }
    }
};
