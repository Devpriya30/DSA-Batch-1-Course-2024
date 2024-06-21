class Solution {
    public int[] finalPrices(int[] prices) {
        Stack<Integer> stack = new Stack<>();

        for(int i=prices.length-1;i>=0;i--){
            while(!stack.isEmpty() && stack.peek()>prices[i]){
                stack.pop();
            }
            int top = stack.isEmpty() ? 0 : stack.peek();
            stack.push(prices[i]);
            prices[i]-=top;
            }
        return prices;
    }
}
