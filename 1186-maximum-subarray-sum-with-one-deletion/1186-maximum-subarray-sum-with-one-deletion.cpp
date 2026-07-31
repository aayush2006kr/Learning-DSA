class Solution {
public:
    int maximumSum(vector<int>& nums) {
        
        int noDelete  = nums[0];
        int oneDelete = INT_MIN;
        int res = nums[0];

        for(int i=1 ;i<nums.size();i++){
            int prevnoDelete =  noDelete;
            int prevoneDelete = oneDelete ;

            noDelete = max(noDelete+nums[i] , nums[i]);

            int v2;
            if(prevoneDelete == INT_MIN){
                v2 = nums[i];
            }
            else v2= prevoneDelete + nums[i];

            oneDelete = max(v2 ,prevnoDelete);

            res = max(res , max(oneDelete , noDelete));


        }
        return res;
        
    }
};