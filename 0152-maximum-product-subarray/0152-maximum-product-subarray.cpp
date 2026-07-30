class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxEnding = nums[0];
        int minEnding = nums[0];
        int res = nums[0];

        for(int i=1;i<nums.size();i++){
            int c1= nums[i];
            int c2 = maxEnding * nums[i];
            int c3 = minEnding * nums[i];;

            maxEnding = max(c1 , max(c2,c3));
            minEnding = min(c1 , min(c2,c3));

            res = max(res , max( maxEnding ,  minEnding));
        }

        return res;
        
    }
};