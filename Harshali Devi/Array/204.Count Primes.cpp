//Day 8
//Question 42
//https://leetcode.com/problems/count-primes/

//Sieve Method
//Consider a table of true and false -> here 1 isPrime and 0 isNotPrime

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<int>prime(n+1,1);
        prime[0]=prime[1]=0;
        for(int i=2;i*i<=n;i++){
            if(prime[i]==1){
                for(int j=i*i;j<n;j+=i){
                    prime[j]=0;
                }
            }
        }
        int output=0;
        for(int i=0;i<n;i++){
            if(prime[i]==1){
                output++;
            }
        }
        return output;
    }
};

//Time Complexity -> O(n)
