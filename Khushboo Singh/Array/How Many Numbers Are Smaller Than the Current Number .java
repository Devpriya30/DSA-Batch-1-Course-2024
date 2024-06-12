class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int n=nums.length;
        int[] result=new int[n];
        int[] countarr=new int[101];
        for(int i=0;i<n;i++){
            countarr[nums[i]]++;
        }
        int temp=0;
        int c=0;
        for(int i=0;i<101;i++){
            if(countarr[i]>0){
                temp=countarr[i];
                countarr[i]=c;
                c+=temp;
            }
        }
        for(int i=0;i<n;i++){
            result[i]=countarr[nums[i]];
        }
        
        return result;
        
    }
}
