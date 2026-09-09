class Solution {
public:
    bool fun(vector<int>& arr, int n , int limit , int days){
        int day = 1;
        int packageWeight = 0;
        for(int i=0 ; i<n ;i++){
            if(packageWeight + arr[i] <= limit){
                packageWeight = packageWeight + arr[i];
            }else{
                day++;
                packageWeight = arr[i];
                if(day>days){
                    return false;
                }
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = 0;
        int high = 0;
        for(int i =0 ; i<n; i++){
            low = max( low , weights[i]);
            high = high + weights[i];
        }
        int res = -1;
        while(high>=low){
            int guess = (low+high)/2;
        if(fun(weights , n , guess , days)){
            res = guess;
            high = guess -1;
        }else{
            low = guess + 1;
        }
        }
        return res;
       
    }
};