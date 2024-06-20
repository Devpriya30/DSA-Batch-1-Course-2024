//USING STACK(1ST METHOD)
class Solution {
     public int calPoints(String[] operations) {
         Stack<Integer>stack=new Stack<>();
         for(String nums:operations){
             if(nums.equals("C")){
                 stack.pop();
             }
             else if(nums.equals("+")){
                 int a=stack.pop();
                 int b=stack.pop();
                 int c=a+b;
                 stack.push(b);
                 stack.push(a);
                 stack.push(c);
             }
             else if(nums.equals("D")){
                 stack.push(stack.peek()*2);
             }
             else{
                 stack.push(Integer.parseInt(nums));
             }
         }
         int score=0;
         while(!stack.isEmpty()){
             score+=stack.pop();
         }  
         return score;
     }
 }
//USING ARRAY(2nd METHOD)

class Solution {
    public int calPoints(String[] operations) {
        int[] ans=new int[operations.length];
        int index=0;
        for(String nums:operations){
            if(nums.equals("+")){
                ans[index]=ans[index-1]+ans[index-2];
                index++;
            }
            else if(nums.equals("D")){
                ans[index]=ans[index-1]*2;
                index++;
            }
            else if(nums.equals("C")){
                index--;
            }
            else{
                ans[index]=Integer.parseInt(nums);
                index++;
            }
        }
        int score=0;
        while(--index>=0){
            score+=ans[index];
        }
        return score;
    }
}
