class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int sum = 0;
        int index = min(col / 2 + col % 2, row / 2 + row % 2);
        for(int i = 0; i < index; i++){
            //printf("%d\n", i);
            for(int j = i; j < col - i; j++){
                if(sum >= row * col)
                    break;
                ans.push_back(matrix[i][j]);
                sum ++;
                //printf("%d\n", matrix[i][j]);
            }

            for(int j = i + 1; j < row - i - 1; j++){
                if(sum >= row * col)
                    break;
                ans.push_back(matrix[j][col - i - 1]);
                sum++;
                //printf("%d\n", matrix[j][col - i - 1]);
            }

                
            for(int j = col - i - 1; j >= i && row - i - 1 > i; j--){
                if(sum >= row * col)
                    break;
                ans.push_back(matrix[row - i - 1][j]);
                sum++;
                //printf("%d\n", matrix[row - i - 1][j]);
            }

            for(int j = row - i - 2; j > i; j--){
                if(sum >= row * col)
                    break;
                ans.push_back(matrix[j][i]);
                sum++;
                //printf("%d\n", matrix[j][i]);
            }
            if(sum >= row * col)
                break;
            
        }
        
        
        return ans;
        
    }
};