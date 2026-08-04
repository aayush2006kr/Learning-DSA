class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int Psum=0;
       int res = 0;
       unordered_map<int,int>mpp;
       mpp[0]=1;

        for(int i =0; i<nums.size() ;i++){
            Psum += nums[i];

            int question = Psum-k;
            int frequency = mpp[question];

            
            res = res + frequency ;

            mpp[Psum]++;
        }

        return res;   
    }
};;