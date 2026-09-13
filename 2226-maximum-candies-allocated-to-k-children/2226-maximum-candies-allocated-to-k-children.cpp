class Solution {
public:
        bool fun(vector<int>& candies, int n, long long guess, long long k) {

        long long children = 0;

        for(int i = 0; i < n; i++) {

            children += candies[i] / guess;

            if(children >= k)
                return true;
        }

        return false;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();

        long long low = 1;
        long long high = 0;

        for(int i=0;i<n;i++){
            high = max(high , (long long ) candies[i]);
        }
          long long res = 0;

        while(low <= high) {

            long long guess = (low + high) / 2;

            if(fun(candies, n, guess, k)) {
                res = guess;
                low = guess + 1;

            } else {
                high = guess - 1;
            }
        }
        return res;
    }
};