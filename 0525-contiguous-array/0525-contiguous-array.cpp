class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int res = 0;
        int zeroes = 0;
        int ones = 0;
        unordered_map<int,int>mpp;

        for(int i=0; i<nums.size() ; i++){

            if(nums[i]==0){
                zeroes++;
            }else{
                ones++;
            }

            int diff = zeroes - ones;

            if(diff==0){
                res = max(res , i+1);
                continue;
            } 

            if(mpp.find(diff)==mpp.end()){
                mpp[diff] = i;
            }
            else{
                int idx = mpp[diff];
                int len = i - idx;
                res = max(res , len);
            }


        }
        return res;
    }
};