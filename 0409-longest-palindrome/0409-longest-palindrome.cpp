class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mpp;
        for(int i =0 ; i<s.size();i++){
            mpp[s[i]]++;
        }

        bool odd = false;
        int res = 0;

        for(auto i:mpp){
            int val = i.second;
            if(val%2==0){
                res = res + val;
            }
            else{
                odd = true;
            }           
        }

        if(odd == false){
            return res;
        }

        for(auto i:mpp){
            int val = i.second;
            if(val%2==1){
                res = res + (val-1);
            }
        }

        return res+1;

    }
};