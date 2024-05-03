class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        vector<int> ans;
        vector<int> record;
        for(int i = 0; i < obstacles.size(); i ++){
            if(i == 0){
                record.push_back(obstacles[i]);
                ans.push_back(1);
            }else{
                int len = lower_bound(record.begin(), record.end(), obstacles[i] + 1) - record.begin();
                if(len == record.size()){
                    record.push_back(obstacles[i]);
                }else{
                    record[len] = obstacles[i];
                }
                ans.push_back(len + 1);
            }
        }
        return ans;
    }
};