class Solution {
    public void nextPermutation(int[] nums) {
        int n = nums.length;
        if (n <= 1) {
            return;
        }
        
        int idx1 = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx1 = i;
                break;
            }
        }
        
        if (idx1 < 0) {
            reverse(nums, 0, n - 1);
    
        } else {
            int idx2 = -1;
            for (int i = n - 1; i > idx1; i--) {
                if (nums[i] > nums[idx1]) {
                    idx2 = i;
                    break;
                }
            }
            swap(nums, idx1, idx2);
            reverse(nums, idx1 + 1, n - 1);
        }
    }
    private void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    private void reverse(int[] nums, int start, int end) {
        while (start < end) {
            swap(nums, start, end);
            start++;
            end--;
        }
    }
}

