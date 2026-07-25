class Solution {
public:

   

    int longestOnes(vector<int>& nums, int k) {
        
        int low = 0;
        int high = 0;
        int zeroCount = 0;
        int res = INT_MIN;
        int n = nums.size();
        int len=0;

        

        for(high=0;high<n;high++){

            if(nums[high]==0){
                zeroCount++;
            }

            while(k<zeroCount){

                if (nums[low] == 0){
                        zeroCount--;
                       
                }
                low++;
                    
            }

            len = high - low + 1;
            res = max(res,len);

        }

        

        return res;
    }
};