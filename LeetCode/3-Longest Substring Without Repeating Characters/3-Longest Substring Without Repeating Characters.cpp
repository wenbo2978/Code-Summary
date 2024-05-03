class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        map<char, int> mp;
        int sum = 0, sumtmp = 0;
        for(int i =0; i < s.size(); i ++){
            if(mp.find(s[i]) == mp.end()){
                mp.insert(pair<char, int>(s[i], i));
                sumtmp ++;
            }else{
                if(mp[s[i]] == -1){
                    sumtmp ++;
                    mp[s[i]] = i;
                }else{
                    sum = max(sum, sumtmp);
                    //printf("%d %d\n", sum, i);
                    sumtmp = i - mp[s[i]];
                    for(int j = start; j < mp[s[i]]; j ++){
                        if(mp.find(s[j]) != mp.end()){
                            mp[s[j]] = -1;
                        }
                    }
                    start = mp[s[i]] + 1;
                    mp[s[i]] = i;
                }
            }
        }
        return max(sum, sumtmp);
    }
};