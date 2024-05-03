class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        vector<int> record(200001, 0);
        for(int i = 0; i < fruits.size(); i ++){
            record[fruits[i][0]] = fruits[i][1];
        }
        for(int i = 1; i < 200001; i ++){
            record[i] = record[i] + record[i-1];
        }
        for(int i = 0; i < 41; i++){
            printf("[%d, %d]\n", record[i], i);
        }
        int sum = 0;
        /*for(int i = 0; i <=k; i++){
            int sum1 = 0;
            int left = i;
            int right = k - 2 * i;
            if(right < 0)
                right = 0;
            if(startPos - left > 0){
                if (startPos + right > 200000)
                    sum1 = record[200000] - record[startPos - left - 1];
                else
                    sum1 = record[startPos + right] - record[startPos - left - 1];
            }else{
                if (startPos + right > 200000)
                    sum1 = record[200000] - 0;
                else
                    sum1 = record[startPos + right] - 0;
            }
            if(sum1 > sum)
                sum = sum1;
        }*/
        for(int x = 0; 2 * x <= k; x ++ ) {
            int y = k - 2 * x;
            int l1 = max(startPos - x, 0), 
                r1 = min(startPos + y, 200000),
                l2 = max(startPos - y, 0), 
                r2 = min(startPos + x, 200000);
            sum = max({
                sum,
                record[r1] - (l1 ? record[l1 - 1] : 0),
                record[r2] - (l2 ? record[l2 - 1] : 0)
            });
        }

        return sum;
    }
};