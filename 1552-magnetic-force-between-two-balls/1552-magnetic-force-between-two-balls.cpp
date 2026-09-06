class Solution {
public:
    bool fun(vector<int> &arr ,int n ,int m , int guess){
        int balls = 1;
        int prevpos = arr[0];
        for(int i=1 ; i<n ; i++){
            int force = arr[i] - prevpos;
            if(force<guess){
                continue;
            }else{
                balls++;
                prevpos = arr[i];
            }
            if(balls>=m){
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
      int n = position.size();
      sort(position.begin() ,position.end());
      int low = 1;
      int high = position[n-1] - position[0];
      int res = -1;

       while(low<=high){
          int guess = (low+high)/2;
          
          
          if(fun(position , n , m , guess)){
              res = guess;
              low  = guess +1;
          }else{
              high = guess-1;
          }
      }
      return res;
        
    
    
    }
};