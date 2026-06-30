class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefix(nums.size());
        prefix[0] =nums[0];
        for(int i=1; i<nums.size(); i++){
            prefix[i] += nums[i] + prefix[i-1];
        }
        int rightSum = 0;
        int leftSum = 0;

        if(0==prefix[nums.size()-1]-prefix[0])
            return 0;

        for(int i=1; i<nums.size(); i++){
            leftSum = prefix[i-1];
            rightSum = prefix[nums.size()-1] - prefix[i];
            if(rightSum==leftSum){
                return i;
            }
        }
        return  -1;
    }
};