class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i;
        int n=nums.size();
        int maxcount=n/2;
        int mostFrequent=nums[0];
        int count=1;
        sort(nums.begin(),nums.end());
        for(i=1; i<n; i++){
            if(nums[i]==nums[i-1]) {
                  count++;
            
        
        if(count>maxcount){
            mostFrequent = nums[i];
            break;
        }}
         else count=1;
        }
        return mostFrequent;
    }
};