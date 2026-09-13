class Solution {
public:
    bool fun(vector<int>& arr , int guess, int n){
        int paper = 0;
        for(int i=0 ;i<n ;i++){

            if(guess<=arr[i]){
                paper++;
            }
        }
        if(paper>=guess){
            return true;
        }
        return false;
    }
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int low  = 0 ;
        int high = 0;
        for(int i=0; i<n; i++){
            high = max(high , citations[i]);
        }
        int res = 0;

        while(low<=high){
            int guess = (high + low)/2;

            if(fun(citations , guess , n)){
                res = guess;
                low = guess+1;
            }else{
                high = guess -1;
            }


        }
        return res; 

    }
};