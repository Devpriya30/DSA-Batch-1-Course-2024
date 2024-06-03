class Solution {
    public int maxWidthOfVerticalArea(int[][] points) {
        int[] arr=new int[points.length];
        int max=0;
        for(int i=0;i<points.length;i++){
            arr[i]=points[i][0];
        }
        Arrays.sort(arr);
        for(int i=0;i<arr.length-1;i++){
            if(arr[i+1]-arr[i]>max){
            max=arr[i+1]-arr[i];
            }
            
        }
        return max;
       
    }
}
