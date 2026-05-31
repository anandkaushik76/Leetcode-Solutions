class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long curr_mass=mass;
        for(int i=0; i<asteroids.size(); i++){
            if(curr_mass<asteroids[i])
            return false;
            else
            curr_mass+=asteroids[i];
        }
        return true;
    }
};