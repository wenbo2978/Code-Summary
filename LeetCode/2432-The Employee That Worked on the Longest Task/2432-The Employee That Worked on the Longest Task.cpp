class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        //vector<int> record;
        int maxTime = 0, maxId = -1;
        for(int i = 0; i < logs.size(); i ++){
            if(i == 0){
                maxTime = logs[i][1];
                maxId = logs[i][0];
            }else{
                int id = logs[i][0];
                int time = logs[i][1] - logs[i - 1][1];
                if(time > maxTime){
                    maxTime = time;
                    maxId = id;
                }
                if(maxTime == time){
                    if(id < maxId){
                        maxTime = time;
                        maxId = id;
                    }
                }
            }
        }
        return maxId;
    }
};
