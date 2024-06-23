// without using stack..
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        for(int i=0,j=i+1;i>=0 && j<asteroids.size();){
            if(asteroids[i]*asteroids[j] < 0  && asteroids[i] > asteroids[j]){
                    if(abs(asteroids[i]) > abs(asteroids[j])){
                        asteroids.erase(asteroids.begin()+j);
                    }
                    else if(abs(asteroids[i]) < abs(asteroids[j])){
                        asteroids.erase(asteroids.begin()+i);
                    }
                    else{
                        asteroids.erase(asteroids.begin()+j);
                        asteroids.erase(asteroids.begin()+i);
                    }
                    if(i==0);
                    else{
                        i--;
                        j--;
                    }
            }
            else{
                i++;
                j++;
            }
        }
        return asteroids;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)
