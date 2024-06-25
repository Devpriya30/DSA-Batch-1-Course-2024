class Solution {
public:
    bool isHappy(int n) {
        int sum;
        if(n==1 || n==7)
        return true;
        if(n<10)
        return false;
        else{
            sum=0;
            while(n>0){
                int rem=n%10;
                sum=sum+rem*rem;
                n/=10;
            }
        }
        return isHappy(sum);
    }
};

TIME COMPLEXITY : O()
SPACE COMPLEXITY : O(1)
