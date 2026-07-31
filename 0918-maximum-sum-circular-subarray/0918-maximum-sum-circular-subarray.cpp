class Solution {
public:

    int maxSum(vector<int>&nums){

       int bestEnding = nums[0];
       int res = nums[0];

       for(int i = 1 ;i<nums.size();i++){
        int v1 = bestEnding + nums[i];
        int v2  = nums[i];
        bestEnding = max(v1 ,v2);
        res = max(res , bestEnding);
       }
       return res;
    }

    int minSum(vector<int>&nums){

       int bestEnding = nums[0];
       int res = nums[0];

       for(int i = 1 ;i<nums.size();i++){
        int v1 = bestEnding + nums[i];
        int v2  = nums[i];
        bestEnding = min(v1 ,v2);
        res = min(res , bestEnding);
       }
       return res;
    }


    int maxSubarraySumCircular(vector<int>& nums) {

        int maxsum = maxSum(nums);
        
        if (maxsum < 0)
        return maxsum;

        int minsum = minSum(nums);
        int totalsum = 0;
        int res = nums[0];

        for(int i =0  ; i<nums.size() ;i++){

            totalsum = totalsum + nums[i];
            
        }
        res = max(maxsum , (totalsum-minsum));

        return res;
        
    }
};