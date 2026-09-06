class Solution {
public:
   long long totalHours(vector<int>&arr, int n , int speed){
        long long  h = 0;
        for(int i=0 ;i<n ; i++){

            h = h + arr[i]/speed;

            if(arr[i]%speed != 0){
                h++;
            }
        }
        return h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
      int n = piles.size();
      int low= 1;
      int high = -1;
      int res = -1;
      for(int i =0 ; i<n;i++){
        high = max(high , piles[i]);
      }

      while(low<=high){
        int guess = low + (high - low) / 2;
       long long hours = totalHours(piles , n , guess);

        if(hours>h){
            low = guess+1;
        }else{
            res = guess;
            high = guess-1;
        }
      }
      return res;


    }
};