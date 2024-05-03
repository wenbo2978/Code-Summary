class Solution {
public:
    int countTime(string time) {
        int h1 = 0, h2 = 0, m1 = 0, m2 = 0;
        int nh = 1, nm1 = 1, nm2 = 1;
        for(int i = 0; i < 5; i ++){
            if(time[i] == '?'){
                if(i == 0){
                    h1 = 1;
                }else if(i == 1){
                    h2 = 1;
                }else if(i == 3){
                    m1 = 1;
                }else if(i == 4){
                    m2 = 1;
                }
            }
        }
        if(h1 == 1 && h2 == 1){
            nh = 24;
        }else if(h1 == 1){
            if(time[1] >= '4'){
                nh = 2;
            }else{
                nh = 3;
            }
        }else if(h2 == 1){
            if(time[0] == '2'){
                nh = 4;
            }else{
                nh = 10;
            }
        }

        if(m1 == 1){
            nm1 = 6;
        }
        if(m2 == 1){
            nm2 = 10;
        }
        return nm1 * nm2 * nh;
    }
};