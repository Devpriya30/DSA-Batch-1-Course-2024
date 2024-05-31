class Solution {
    public int largestAltitude(int[] gain) {
        int res = 0;
        int sm = 0;
        for(int i=0; i< gain.length; i++) {
            sm += gain[i];
            if(sm > res) {
                res = sm;
            }
        }
        return res;
    }
}