class Solution {
public:
    bool fun(vector<int>&arr ,int n, int guess ,int m , int k){
        int count = 0;
        int boquet = 0;
        for(int i=0 ; i<n; i++){
            if(arr[i]<=guess){
                count++;
            }else{
                boquet += count/k;
                count = 0;
            }
        }
        boquet += count/k;
        if(boquet>=m){
            return true;
        }else{
            return false;
        }
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long)m*k>n){
            return -1;
        }
        int low = INT_MAX;
        int high = INT_MIN;

        for(int i=0 ; i<bloomDay.size() ;i++){
            low = min(low ,bloomDay[i]);
            high = max(high , bloomDay[i]);
        }
        int res = -1;
        while(low<=high){
            int guess = (low+high)/2;
            if(fun(bloomDay ,n, guess , m , k)){
                res = guess ;
                high = guess -1;
            }else{
                low= guess +1;
            }
        }
        return res;


    }
};