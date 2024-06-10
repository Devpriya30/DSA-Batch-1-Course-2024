class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
      int rows=grid.length;
      int cols=grid[0].length;
      int[] arr = new int[2];
      Map<Integer,Integer> map = new HashMap<>();
      for(int row=0;row<rows;row++)
      {
        for(int col=0;col<cols;col++)
        {
                if(map.containsKey(grid[row][col]))
            {
                map.put(grid[row][col],map.get(grid[row][col]) + 1 );
            }
            else
            {
                map.put(grid[row][col],1);
            }
        }
      }
        
    for(int i=1;i<=rows*cols;i++)
    {
        if(map.containsKey(i))
        {
            if(map.get(i)==2)
            {
                arr[0]=i;
            }
            
        }
        else
        {
            arr[1]=i;
        }
    }
    return arr;

    }
}

//T.C = O(n2)

//S.C= O(n2)
