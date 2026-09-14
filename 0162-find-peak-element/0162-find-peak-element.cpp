class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int res = -1;

        while(high>=low){
            int guess = (low+high)/2;
            if (guess == nums.size() - 1 || nums[guess] > nums[guess + 1]) {
                res = guess;
                high = guess-1;
            }
            else {
                low = guess + 1;
            }  
            
            
        }
        return res;
    }
};