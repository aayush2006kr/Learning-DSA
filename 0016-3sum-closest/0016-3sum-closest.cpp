class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int res_sum = nums[0] + nums[1] +  nums[2];
        int min_diff = INT_MAX ;

        for(int i=0 ; i<n-2 ;i++){
            int left=i+1;
            int right=n-1;

            while(left<right){

            int sum = nums[i] + nums[left] + nums[right];

            if(sum==target){
                return sum;
            }

            int diff = abs(sum - target);
            if(diff<min_diff){
                res_sum = sum ;
                min_diff = diff; 
            }

            if(sum<target){
                left++;
            }else{
                right--;
            }

        }
      
        }

        return res_sum;
    }
};