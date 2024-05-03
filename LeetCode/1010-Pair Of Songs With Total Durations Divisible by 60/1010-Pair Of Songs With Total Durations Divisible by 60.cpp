class Solution {
public:
    /*int numPairsDivisibleBy60(vector<int>& time) {
        int sum = 0;
        //vector<int> record(1001, 0);
        vector<int> record2(1001, 0);
        for(int i = 0; i < time.size(); i ++){
            //printf("111111\n");
            for(int j = 1; j * 60 - time[i] <= 1000; j ++){
                if(j * 60 - time[i] > 0)
                    sum += record2[j * 60 - time[i]];
            }
            record2[time[i]] ++;
        }
        return sum;
    }*/

    int numPairsDivisibleBy60(vector<int>& time){
        int sum = 0;
        vector<int> record3(60, 0);
        for(int i = 0; i < time.size(); i ++){
            int rest = time[i] % 60;
            if(rest != 0){
                sum += record3[60 - rest];
            }else{
                sum += record3[rest];
            }
            record3[rest] ++;
        }
        return sum;
    }

};