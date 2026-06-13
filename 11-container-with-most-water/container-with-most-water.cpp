class Solution {
public:
    int maxArea(vector<int>& height) {
        double width = 0;
        double area = 0;
        double h = 0;
        double maxArea = 0;
        int left = 0; 
        int right = height.size()-1;
        while(left<right){
            width = right-left;
            h = min(height[left],height[right]);
            area = h * width;
            maxArea = max(area,maxArea);
            if(height[left]<=height[right]){
                left++;
            }else{
                right--;
            }
       }
       return maxArea;
    }
};