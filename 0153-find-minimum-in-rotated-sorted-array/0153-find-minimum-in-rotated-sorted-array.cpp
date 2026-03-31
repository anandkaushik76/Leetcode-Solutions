class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<s){
                s = nums[i];
            }
        }
        return s;
    }
};