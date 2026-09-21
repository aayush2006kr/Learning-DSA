class Solution {
public:
    struct cmp{
        bool operator()(pair<int,int>&a , pair<int,int>&b ){
            if(a.first!=b.first){
                return a.first<b.first;
            }
            return a.second>b.second;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int> , vector<pair<int,int>>, cmp > pq;

        for(int i=0 ; i<points.size() ; i++){
            
            int x = points[i][0];
            int y = points[i][1];
            int dis = x*x + y*y;

            pq.push({dis , i});

             if(pq.size() > k) {
                pq.pop();
            }
        }

        vector<vector<int>> ans;
         while(!pq.empty()) {
            int index = pq.top().second;

            ans.push_back(points[index]);

            pq.pop();
        }

        return ans;

    }
};