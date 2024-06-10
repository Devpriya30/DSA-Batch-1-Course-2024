class Solution {
    public int[] decompressRLElist(int[] nums) {
        int n = nums.length;
       ArrayList<Integer> li = new ArrayList<>();
        
        for(int i = 1 ; i<n; i+=2){
            while(nums[i-1]>0){
                li.add(nums[i]);
                nums[i-1]--;
            }
        }
        int [] ans= new int[li.size()];
        for (int i = 0 ; i< li.size() ; i++){
            ans[i]= li.get(i);
            
        }
   return ans;
    }
}
