class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0;
        string s=to_string(n);
        for(int i=0; i<s.size(); i++){
            int digit=s[i]-'0';
            if(i%2==0){
                sum+=digit;
            }
            else{
                sum-=digit;
            }
        }
        return sum;
    }
};