class Solution {
    public int maxWidthOfVerticalArea(int[][] points) {
        int max =0;
        int[] arr = new int[points.length];
        for(int i=0;i<points.length;i++){
            arr[i] = points[i][0];
        }
        Arrays.sort(arr);
        for(int i=0;i<arr.length-1;i++)
        {
            max = Math.max((arr[i+1]-arr[i]),max);
        }
        return max;
  
    }
}

//T.C =O(nlog(n))

// S.C =O(n)
