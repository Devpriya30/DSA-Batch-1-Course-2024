class Solution {
    public int maxWidthOfVerticalArea(int[][] points) {
        
        int n = points.length;
        int[] arr = new int[n];
        
        int temp=0;
        for (int i = 0; i < n; i++) {
            arr[i] = points[i][0];
        }
        
        Arrays.sort(arr);
        
        for(int i=0;i<n-1;i++){
         int v = arr[i+1]-arr[i];
           if(v > temp){
            temp=v;                                                                              
        }
        }
        return temp;
    }
}
