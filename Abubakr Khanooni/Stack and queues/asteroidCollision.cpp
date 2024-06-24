class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>vec;
        for(int i=0;i<asteroids.size();i++){
            if(vec.size()==0 || asteroids[i]>0){
                vec.push_back(asteroids[i]);
            }
            else{
                while(vec.size()!=0 && vec.back()>0 && vec.back()<abs(asteroids[i])){
                    vec.pop_back();
                }
                if(vec.size()!=0 && vec.back()==abs(asteroids[i])){
                    vec.pop_back();
                }
                else{
                    if(vec.size()==0 || vec.back()<0){
                        vec.push_back(asteroids[i]);
                    }
                }
            }
        }
        return vec;
    }
};
