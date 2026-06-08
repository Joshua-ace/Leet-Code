class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
         if(nums.empty()) return 0;
        int count=0;
        for(int right = 1; right<nums.size(); right++){
            if(nums[left]!=nums[right])
            left++;
            nums[left] = nums[right];
            count++;
        }
       
        return left+1;
    }
};