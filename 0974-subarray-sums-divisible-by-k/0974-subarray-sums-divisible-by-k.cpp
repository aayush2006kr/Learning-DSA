class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int Psum = 0;
        int res = 0;
        unordered_map<int,int>mpp;
        mpp[0]=1;

        for(int i=0; i<nums.size();i++){

            Psum = Psum + nums[i];
            int rem = Psum % k; //question
            if(rem < 0) rem = rem + k;

            int frequency = mpp[rem] ;
            res = res + frequency;
            mpp[rem]++;

        }
        return res;
        
    }
};