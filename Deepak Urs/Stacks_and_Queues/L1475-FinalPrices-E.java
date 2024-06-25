import java.util.*;

class Solution {
    public int[] finalPrices(int[] prices) {
        Stack<Integer> stk = new Stack<>();
        int n = prices.length;
        int[] res = new int[n];

        for(int i = n-1; i > -1; i--) {
            if(stk.size() == 0) {
                res[i] = -1;
            }
            else if (stk.peek() <= prices[i]) {
                res[i] = stk.peek();
            }
            else if (stk.peek() > prices[i]) {
                while (stk.size() > 0 && stk.peek() > prices[i]) {
                    stk.pop();
                }

                if(stk.size() == 0) {
                    res[i] = -1;
                }
                else {
                    res[i] = stk.peek();
                }
            }

            stk.push(prices[i]);
        }

        for(int j = 0; j < res.length; j++) {
            if(res[j] != -1) {
                res[j] = prices[j] - res[j];
            }
            else {
                res[j] = prices[j];
            }
        }

        return res;
    }
}