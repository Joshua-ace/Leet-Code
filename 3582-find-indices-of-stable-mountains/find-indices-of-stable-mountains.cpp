class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        int n = height.size();
        
        vector<int>mount;
        for(int i=1; i<n; i++){
            if(height[i-1]>threshold){
                mount.push_back(i);
            }
        }
        return mount;
    }
};