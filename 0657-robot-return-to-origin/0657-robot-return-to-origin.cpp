class Solution {
public:
    bool judgeCircle(string moves) {
        char L=0;
        char R=0;
        char U=0;
        char D=0;
        for(int i=0; i<moves.size(); i++){
            if(moves[i]=='L'){
                L+=1;
            }
            else if(moves[i]=='R'){
                R+=1;
            }
            else if(moves[i]=='U'){
                U+=1;
            }
            else{
                D+=1;
            }
        }
        if(L==R && D==U){
            return true;
        }
        return false;
    }
};