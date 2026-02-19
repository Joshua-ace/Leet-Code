class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int value = 0;
        int times = 0;
        vector<int> res;
        for(int i=0; i<nums.size(); i+=2){
            times = nums[i];
            value = nums[i+1];
            while(times>0){
                res.push_back(value);
                times--;
            }
           
        }
        return res;
    }
};