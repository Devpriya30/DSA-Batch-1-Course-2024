class Solution {
    public int maxChunksToSorted(int[] arr) {
        int c =0 ;
        int currentmax = 0;
        for(int i=0 ;i<arr.length;i++)
        {
            currentmax = Math.max(arr[i],currentmax);
            if(currentmax == i)
            {
                c++;
            }
        }
      return c  ;
    }
}

//T.C = O(n)

//S.C =O(n)
