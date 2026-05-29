class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int sum=0;
            int temp=nums[i];
            while(temp>0){
            sum+=temp%10;
            temp/=10;
            }
            ans=min(ans,sum);
        }
        return ans;
    }
};