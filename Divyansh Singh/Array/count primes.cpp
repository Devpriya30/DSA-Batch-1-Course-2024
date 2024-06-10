class Solution {
public:
    int countPrimes(int n) {
        vector<bool>nums(n+1,false);

        nums[0]=nums[1]=true;
        int i=2;
        while(i<n){
            if(pow(i,2)<n){
              if(nums[i]==false){
              for(int j=2*i;j<n;j=j+i){
                nums[j]=true;
              }
            }
        }
            else{
                break;
            }
            i++;
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(nums[i]==false){
                count++;
            }
        }

        return count;

        



    }
};
