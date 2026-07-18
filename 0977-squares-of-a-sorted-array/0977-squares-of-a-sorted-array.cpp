class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;

       for(int i=0 ; i<nums.size();i++){
        if(nums[i]>=0){
            pos.push_back(nums[i]);
        }else{
            neg.push_back(nums[i]);
        }
       }

       if(pos.size()==0){
        for(int i=0 ; i<neg.size();i++){
            neg[i] = neg[i]*neg[i];
        }
         reverse(neg.begin(),neg.end());
            return neg;

       }
       if(neg.size()==0){
        for(int i=0 ; i<pos.size();i++){
            pos[i] = pos[i]*pos[i];
        }
         return pos;
       }

        for(int i=0 ; i<pos.size();i++){
            pos[i] = pos[i]*pos[i];
        }

        for(int i=0 ; i<neg.size();i++){
            neg[i] = neg[i]*neg[i];
        }
        reverse(neg.begin(),neg.end());


        vector<int>res(pos.size()+neg.size());
        int i = 0 , j=0, idx=0;
        while(i<pos.size() && j<neg.size()){
            if(pos[i]<=neg[j]){
                res[idx]=pos[i];
                idx++;
                i++;
            }
            else{
                res[idx]=neg[j];
                idx++;
                j++;
            }
        }

        while(j<neg.size()){
            res[idx]=neg[j];
            idx++;
            j++;
        }

         while(i<pos.size()){
            res[idx]=pos[i];
            idx++;
            i++;
        }

        return res;

    }
};