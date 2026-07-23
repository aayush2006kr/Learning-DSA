class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int low = 0 ;
        int high = 0;
        int n = fruits.size();
        unordered_map<int,int>mpp;
        int res = -1;

        for( high=0 ; high<n;high++){
            mpp[fruits[high]]++;

            while(mpp.size()>2){

                mpp[fruits[low]]--;
                 if(mpp[fruits[low]]==0){
                mpp.erase(fruits[low]);
                 }
                 low++;

            }
            int len = high-low+1;
            res = max(len , res);
        }
        return res;
    
    }
};