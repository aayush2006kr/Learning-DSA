class Solution {
public:
    int maxAbsSum(vector<int>&nums){

       int bestEnding = nums[0];
       int res = nums[0];

       for(int i = 1 ;i<nums.size();i++){
        int v1 = bestEnding + nums[i];
        int v2  = nums[i];
        bestEnding = max(v1 ,v2);
        res = max(res , bestEnding);
       }
       return abs(res);
    }

    int minAbsSum(vector<int>&nums){

       int bestEnding = nums[0];
       int res = nums[0];

       for(int i = 1 ;i<nums.size();i++){
        int v1 = bestEnding + nums[i];
        int v2  = nums[i];
        bestEnding = min(v1 ,v2);
        res = min(res , bestEnding);
       }
       return abs(res);
    }


    int maxAbsoluteSum(vector<int>& nums) {

        int v1 = maxAbsSum(nums);
        int v2  = minAbsSum(nums);
        int res = -1;
        res = max(v1 , v2);

        return res;
    }
};