class Solution {
public:
    bool fun(vector<int>& nums ,int n , int limit , int parts){
        int subarr =1;
        long long sum = 0;
        for(int i = 0;i<n; i++){
            if(sum + nums[i]<=limit){
                sum = sum + nums[i];
            }else{
                subarr++;
                sum = nums[i];
                if(subarr>parts){
                    return false;
                }
            }
        }
        return true;
       
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(n<k){
            return -1;
        }
        long long low =0;
        long long high = 0;
        for(int i=0 ; i<n ; i++){
            low  = max(low , (long long)nums[i]);//
            high = high + nums[i];
        }
        long long res = -1;
        while(high>=low){
            long long guess = (high+low)/2;
            if(fun(nums , n , guess , k)){
                res = guess;
                high = guess -1;
            }else{
                low = guess+1;
            }
        }
        return (int)res;
    }
};