//Day 8
//Question 41
//https://leetcode.com/problems/bag-of-tokens/description/

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int n=tokens.size()-1;
        int maxnum;
        int minnum;
        int i=0;
        int j=n;
        int score=0;
        int maxScore = 0;
        while(i<=j){
            minnum=tokens[i];
            if(minnum<=power){           //Face Up
                power=power-minnum;
                score++;
                i++;
                maxScore = max(maxScore, score);
            }
            else if(score>=1){           //Face Down
                power=power+tokens[j];;
                score--;
                j--;
            }
            else{
                break;
            }
        }
        return maxScore;
    }
};
