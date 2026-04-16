class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        vector<int> result;
        for(int i=0;i<n; i++){
            int count=1;
             while (i < n - 1 && nums[i] == nums[i + 1]) {
                count++;
                i++;
            }
            if(count>n/3) result.push_back(nums[i]);
        }
        return result;
    }
};