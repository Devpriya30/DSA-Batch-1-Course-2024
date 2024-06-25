class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0,MaxSum=0;
        for(int i=0;i<k;i++){
           sum+=cardPoints[i];
        }
        int count=k-1;
        MaxSum=sum;
        for(int i=n-1;i>=n-k;i--){
            sum=sum+cardPoints[i]-cardPoints[count--];
            MaxSum=max(MaxSum,sum);
        }
        return MaxSum;
    }
};
