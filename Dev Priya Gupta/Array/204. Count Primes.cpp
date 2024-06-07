class Solution {
public:
    int countPrimes(int n) {
        vector<bool> checkPrime(n,true);
        for(int i=2;i*i<n;i++)
        {
            if(checkPrime[i])
            {
                for(int j=2;j*i<n;j++)
                    checkPrime[i*j]=false;
            }
        }
        int res=0;
        for(int i=2;i<n;i++)
        {
            if(checkPrime[i])
                res++;
        }
        return res;
    }
};

Time Complexity : O(n)
Space Complexity : O(n)
