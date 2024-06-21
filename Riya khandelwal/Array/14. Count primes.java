class Solution {
    public int countPrimes(int n) {
        boolean isprime = true;
        int c=0;
        for(int i=2 ;i<n;i++)
        {
            if(n%i==0)
            {
                isprime = false;
            }
            else
            {
                c++;
            }
        }
        return c;
    }
}
//T.C = 

//S.C = O(n)

