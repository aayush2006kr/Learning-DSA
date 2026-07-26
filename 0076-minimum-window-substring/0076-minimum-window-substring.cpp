class Solution {
public:

    bool checkRightorWrong(vector<int>&needed ,vector<int>&haveNow ){

        for(int i = 0;i<256 ; i++){
            if(haveNow[i]<needed[i])
            return false;
        }

        return true;
    }


    string minWindow(string s, string t) {
        int low = 0;
        int high = 0;
        int res = INT_MAX;
        int start = -1;
        int len = -1;
        vector<int>needed(256);
        vector<int>haveNow(256);


        for(int i=0 ; i<t.size();i++){
            needed[t[i]]++;
        }

        for(high=0;high<s.size();high++){
            haveNow[s[high]]++;

            while(checkRightorWrong(needed ,haveNow)){

                 len = high-low+1;
                if(res>len){
                    res = len;
                    start = low;
                }
                haveNow[s[low]]--;
                low++;
            }
        }

        if(start == -1){
            return "";
        }
                

        return s.substr(start , res);


    }
};