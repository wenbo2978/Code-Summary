class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int number = 1;
        vector<vector<int>> res;
        for(int i = 0; i < n; i ++){
            vector<int> tmp(n, 0);
            res.push_back(tmp);
        }
        //printf("%d\n", res.size());
        //printf("%d\n", res[0].size());
        for(int i = 0; i < n / 2 + n % 2 && number <= n * n; i ++){
            for(int index = i; index < n - i && number <= n * n; index ++){
                res[i][index] = number;
                //printf("%d\n", number);
                number ++;
            }
            for(int index = i + 1; index < n - 1 - i && number <= n * n; index ++){
                res[index][n - i - 1] = number;
                //printf("%d\n", number);
                number ++;
            }
            for(int index = n - i - 1; index >= i && number <= n * n; index --){
                //printf("%d____res[%d][%d]\n", number, n - i - 1, index);
                res[n - i - 1][index] = number;
                number ++;
            }

             for(int index = n - i - 2; index > i && number <= n * n; index --){
                 res[index][i] = number;
                 number ++;
            }
        }
        return res;
    }
};