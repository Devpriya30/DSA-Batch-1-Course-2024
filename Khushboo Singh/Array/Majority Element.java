class Solution {
    public int majorityElement(int[] nums) {
        int c=0,m=0;
        for(int num:nums){
            if(c==0){
                m=num;
                c++;

            }
            else if(m==num){

                c++;
            }
            else{
                c--;
            }
        
        }
        return m;
        
    }
}
