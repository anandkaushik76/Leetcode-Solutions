class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                if(nums[i]==nums[j] && nums[i]==nums[j+1]){
                    nums.erase(nums.begin()+j+1);
                    n--;
                    j--;
                }
            }
        }
        return n;
    }
};