class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> record(26,0);
        for(int i = 0; i < magazine.size(); i++){
            record[magazine[i] - 'a']++;
        }

        for(int i = 0; i < ransomNote.size(); i++){
            record[ransomNote[i] - 'a']--;
            if(record[ransomNote[i] - 'a'] < 0){
                return false;
            }
        }
        return true;
    }
};