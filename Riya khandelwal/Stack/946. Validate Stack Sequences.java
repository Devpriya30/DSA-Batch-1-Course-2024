class Solution {
    public boolean validateStackSequences(int[] pushed, int[] popped) {
        int i = 0;   //for push
        int j = 0;  //for pop
        
        for(int k=0; k<pushed.length; k++)
        {
            pushed[i] = pushed[k]; //to run the loop
            while( i>=0 && pushed[i] == popped[j])
            {
                j++;
                i--;
            }
            
                i++;
                
            
        }
        return i == 0;

    }
}

//T.C = O(n)

//S.C = O(n)
