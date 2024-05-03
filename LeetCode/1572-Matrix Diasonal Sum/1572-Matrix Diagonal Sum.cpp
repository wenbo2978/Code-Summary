class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int l = mat.size();
        
        for(int i = 0; i < mat.size(); i++){
            sum += mat[i][i];
            sum += mat[i][l-1-i];
        }
        if(l % 2 != 0){
            sum -= mat[l/2][l/2];
        }  
        return sum;
        
    }
};