//Using recursion
class Solution {
public:
    bool isHappy(int n) {
        int ans=0;
        if(n<10)
        {
            if(n==1||n==7)
            return true;
            else 
            return false;
        }
        while(n>0)
        {
            ans+=(n%10)*(n%10);
            n/=10;
        }
        return isHappy(ans);
    }
};

Time Complexity : O() // doubt
Space Complexity : O(1)
