class Solution {
public:
    int countPrimes(int n) {
        vector<int>a(n,0);
        int c=0;
        for(int i=2;i*i<n;i++)
        {
            if(a[i]==0)
            for(int j=i*i;j<n;j+=i)
            {
                a[j]=1;
            }
        }
        for(int i=2;i<a.size();i++)
        {
            if(a[i]==0)
               c++;
        }
        return c;
        
    }
};

time complexity:O(nlogn)
space complexity:O(n)
