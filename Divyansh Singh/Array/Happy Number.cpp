class Solution {
public:
    bool isHappy(int n) {
       if(n==1 || n==7){
        return true;
       }
       else if(n<9 && (n!=1 || n!=7)){
        return false;
       }

       int sum=0;
       while(n!=0){
        int r=n%10;
        sum=sum+pow(r,2);
        n=n/10;
       }
       return isHappy(sum);

    }
};
