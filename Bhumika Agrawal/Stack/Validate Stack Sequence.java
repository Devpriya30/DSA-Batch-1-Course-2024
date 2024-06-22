class Solution {
    public boolean validateStackSequences(int[] pushed, int[] popped) {
        int i=0;
        int j=0;
        int k=0;
        while(k<pushed.length){
           pushed[i]=pushed[k];
           while(i>=0 && pushed[i]==popped[j]){
            i--;
            j++;
           }
           i++;
           k++;
        }
        return i==0;

        
    }
}
//Time=O(n)
//Space=O(1)
