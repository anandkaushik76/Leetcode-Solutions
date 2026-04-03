class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
      int i=0;
      int j=n-1;  
      int area=0;
      while(i<j){
        int a=(j-i)*min(height[i],height[j]);
        if(a>area){
            area=a;
        }
        if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
      }
      return area;
    }
};