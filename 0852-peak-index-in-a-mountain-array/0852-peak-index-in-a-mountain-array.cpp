class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int res  =-1;
        int low = 0;
        int high = n-1;
        while(high>=low){
            int guess = (low+high)/2;

            if(arr[guess]<arr[guess+1]){  //chadai
                low = guess +1;
            }
            else{ // dhalao , and first dhalao apna ans ha
                res = guess;
                high = guess -1 ;
            }
        }
        return res;
    }
};