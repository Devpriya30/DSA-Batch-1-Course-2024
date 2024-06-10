class Solution {
    public int maximumWealth(int[][] accounts) {
       int max =0;
       int l = accounts.length;
       int l1 =accounts[0].length;
       
       for(int i=0; i<l;i++)
       {
            int sum =0;
            for( int j=0; j <l1 ; j++)
            {
                
                sum +=accounts[i][j];
                max = Math.max(sum,max);
        
            }
       }
       return max;
       
    }
}

//T.C = O(n2)

//S.C = O(1)
