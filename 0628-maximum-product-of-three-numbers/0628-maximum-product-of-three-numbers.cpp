class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int p;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
        if(n==3) {
            p=nums[0]*nums[1]*nums[2];
        }
        else{
            p=max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]);
        }
        }
        return p;
    }
};