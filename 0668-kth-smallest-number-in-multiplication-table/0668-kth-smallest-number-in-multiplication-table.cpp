class Solution {
public:
    bool fun(int guess ,int m ,int n, int k){
        int sum = 0;
        for(int i=1 ; i<=m ;i++){
            sum = sum + min(guess/i,n);            
        }
        if(sum>=k){
            return true;
        }
        return false;
    }
    int findKthNumber(int m, int n, int k) {
        int low = 1;
        int high = m*n;
        int res = -1;
        while(low<=high){
            int guess = (high+low)/2;
            if(fun(guess , m , n, k)){
                res = guess ;
                high = guess- 1;
            }else{
                low = guess+1;
            }
        }
        return res;
    }
};