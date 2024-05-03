#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

vector<int> numMovesStones(int a, int b, int c) {
        vector<int> v;
        int mx, md,mn;
        if (a > b && a > c){
            if (b > c){
                mx = a;
                md = b;
                mn = c;
            }else{
                mx = a;
                md = c;
                mn = b;
            }
        }else if(b > a && b > c){
            if (a > c){
                mx = b;
                md = a;
                mn = c;
            }else{
                mx = b;
                md = c;
                mn = a;
            }
        }else if(c > a && c > b){
            if (a > b){
                mx = c;
                md = a;
                mn = b;
            }else{
                mx = c;
                md = b;
                mn = a;
            }
        }
        //printf("%d %d %d\n", mx, md, mn);
        int maxnum, minnum;
        if ((mx - md == 1) && (md - mn == 1)){
            minnum = 0;
            maxnum = 0;
        }else if((mx - md == 1) || (md - mn == 1)){
            if(mx - md == 1){
                minnum = 1;
                maxnum = md - mn - 1;
            }else{
                minnum = 1;
                maxnum = mx - md - 1;
            }
        }else if((mx - md == 2) || (md - mn == 2)){
                minnum = 1;
                maxnum = md - mn - 1 + mx - md -1;
        }else{
            minnum = 2;
            maxnum = md - mn - 1 + mx - md -1;
        }
        v.push_back(minnum);
        v.push_back(maxnum);
        return v;
}

int main(){
	printf("------------start-----------\n");
	int a, b, c;
	scanf("%d %d %d",&a, &b, &c);
	vector<int> v = numMovesStones(a, b, c);
	printf("[%d, %d]\n", v[0], v[1]);
	printf("------------end-----------\n");
	return 0;
}
