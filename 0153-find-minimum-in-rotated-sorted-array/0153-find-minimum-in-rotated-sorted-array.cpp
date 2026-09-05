class Solution {
public:
    int findMin(vector<int>& nums) {
       int res = -1;
       int n = nums.size();
       int low = 0 ;
       int high = n-1;
       while(high>=low){
        int guess = (high+low)/2;

        if(nums[guess]> nums[n-1]){ //part 2
                low = guess + 1;
        }
        else{ // part1
            res = guess;
            high =  guess -1;
        }
       }
       return nums[res];

      
    }
};