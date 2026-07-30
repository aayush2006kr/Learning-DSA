class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int bestEnding = nums[0];
       int res = nums[0];

       for(int i=1 ; i<nums.size() ;i++){
        int choice1 = bestEnding + nums[i];
        int choice2 = nums[i];

        bestEnding = max(choice1 , choice2);
        res = max(res , bestEnding);
       }
       return res;
        
    }
};