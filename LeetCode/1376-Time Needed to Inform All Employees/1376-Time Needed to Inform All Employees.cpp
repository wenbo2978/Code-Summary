#include<stdio.h>
#include<iostream>
#include<vector>
#include<map>

using namespace std;


/*
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        int sum = 0;
        for(int i = 0; i < n; i++){
            int id = manager[i];
            int sum1 = informTime[i];
            while(id!=-1){
                sum1 += informTime[id];
                id = manager[id];
            }
            if(sum < sum1)
                sum = sum1;
        }
        //printf("%d\n", sum);
        return sum;
    }
};


*/

int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime){
	map<int, int> rank;
	rank.insert(pair<int, int> (10, 10));
}

int main(){
	return 0;
}
