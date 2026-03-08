class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1; i<n; i++){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i);
                i--;
                n--;
            }
        }
        if(n<3)
            return nums[n-1];
            return nums[n-3];
    }
};