class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> number;
        if(x < 0)
            return false;
        while(x > 0){
            int n = x % 10;
            x = x /10;
            number.push_back(n);
        }
        int len = number.size();
        int s = 0, e = len-1;
        while(s < e){
            if(number[s] != number[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
};