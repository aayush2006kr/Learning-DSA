class Solution {
public:

 int maxValue(vector<int>&arr){
        int maxi = INT_MIN;
        for(int i=0 ; i<256; i++){
            maxi = max(maxi , arr[i]);
        }
        return maxi;
    }

    int characterReplacement(string s, int k) {

    int low=0;
    int high =0;
    int n = s.size();
    vector<int>hash(256);
    int res=INT_MIN;

    for(high=0 ; high<n; high++){

        hash[s[high]]++;

        int len = high - low + 1;
        int maxFreq = maxValue(hash);
        int diff = len-maxFreq ;

        while(diff>k){
            hash[s[low]]--;
            low++;

            len = high - low +1;
            maxFreq = maxValue(hash);
            diff = len-maxFreq;
        }

         len = high - low +1;
         res = max(len, res);
    }

    return res;

    }
};