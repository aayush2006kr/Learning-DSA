class Solution {
public:

    int sumofDigit(int n){
        int sum = 0;
        int digit = -1;
        while(n>0){
            digit = n % 10;
            n = n/10;
            sum = sum + digit*digit;
        }
        return sum;
    }

    bool isHappy(int n) {

       int slow = n;
        int fast = n;

        while(fast!=1){
            slow = sumofDigit(slow);
            fast = sumofDigit(fast);
            fast = sumofDigit(fast);

            if(slow==fast && slow!=1){
                return false;
            }
        }
        return true;
        
    }
};