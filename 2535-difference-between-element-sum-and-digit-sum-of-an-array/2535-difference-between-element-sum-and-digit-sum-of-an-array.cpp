class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementsum=0;
        int digitsum=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            elementsum+=nums[i];
        
        while(nums[i]>0){
            int ld=nums[i]%10;
            nums[i]=nums[i]/10;
            digitsum+=ld;
        }}
         if(elementsum>=digitsum)   return elementsum-digitsum;
        else   return digitsum-elementsum;    
    }
};