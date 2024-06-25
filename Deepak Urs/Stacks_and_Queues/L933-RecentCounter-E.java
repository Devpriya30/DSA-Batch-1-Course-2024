import java.util.*;

class RecentCounter {
    Queue<Integer> queue;
    public RecentCounter() {
        queue = new PriorityQueue<>();
    }
    
    public int ping(int t) {
        while (queue.size() > 0 && queue.peek() + 3000 < t) {
            queue.remove();
        }

        queue.add(t);

        return queue.size();
    }
}

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter obj = new RecentCounter();
 * int param_1 = obj.ping(t);
 */