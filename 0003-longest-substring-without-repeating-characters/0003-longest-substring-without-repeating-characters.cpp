class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0;
        int high = 0;
        int res = INT_MIN;
        unordered_map<char,int>mpp;
        int n = s.size();

        for(int high=0 ; high<n ;high++){

            mpp[s[high]]++;

            int k = high - low + 1;

            while(mpp.size()<k){
                mpp[s[low]]--;
                if(mpp[s[low]]==0){
                    mpp.erase(s[low]);
                }
                low++;
                k= high - low + 1;
            }

            int len = high - low+1;
            res = max(res,len);


        }
        if(s.empty()){
            return 0;
        }
        return res ;
        
    }
};