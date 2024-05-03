class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        int numC = 0, numR = 0, numO = 0, numA = 0, numK = 0;
        int res = 0;
        for(int i = 0; i < croakOfFrogs.size(); i++){
            if(croakOfFrogs[i] == 'c'){
                numC ++;
            }else if(croakOfFrogs[i] == 'r'){
                numR++;
            }else if(croakOfFrogs[i] == 'o'){
                numO++;
            }else if(croakOfFrogs[i] == 'a'){
                numA++;
            }else if(croakOfFrogs[i] == 'k'){
                numK++;
            }
            res = max(res, numC - numK);
            if(numC >= numR && numR>= numO && numO >= numA && numA >= numK)
                continue;
            else
                return -1;
        }
        if(numC == numR && numR== numO && numO == numA && numA == numK)
            return res;
        else
            return -1;
    }
};
