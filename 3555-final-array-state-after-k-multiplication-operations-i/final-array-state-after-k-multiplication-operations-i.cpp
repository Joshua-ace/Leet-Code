class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int count = k;
        int n = nums.size();
        int index = 0;
        int small = nums[0];
        while(k>0){
        k--;
            for(int j=0; j<n; j++){
                if(small>nums[j]){
                    small = nums[j];
                    index = j;
                }
        }

         nums[index] = nums[index]*multiplier;
         small = nums[0];
         index =0;
        }
        return nums;
    }
};