class Solution {
    public int countPrimes(int n) { 
        int count=0;
        boolean[] isNonPrime=new boolean[n];
        for(int i=2;i*i<=n;i++){
            if(!isNonPrime[i]){
                for(int j=i*i;j<n;j+=i){
                    isNonPrime[j]=true;

                }
            }
        }
        for(int i=2;i<n;i++){
            if(!isNonPrime[i]){
                count++;
            }
        }
        return count;
    }
}
