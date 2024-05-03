class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans(k, 0);
        priority_queue<pair<int, int>> pq;
        for(int i = 0; i < mat.size(); i++){
            int s = 0;
            for(int j = 0; j < mat[i].size(); j ++){
                if(mat[i][j] == 1)
                    s ++;
            }
            //printf("%d %d\n",s, i);
            if(pq.size() < k){
                    pq.push(pair<int, int> (s, i));
            }else{
                if(pq.top().first > s){
                    pq.pop();
                    pq.push(pair<int, int> (s, i));
                }
            }
        }
        int l = 0;
        while(pq.size()){
            ans[k - l - 1] = pq.top().second;
            l++;
            //printf("%d %d\n", pq.top().first, pq.top().second);
            pq.pop();
        }
        return ans;
    }
};