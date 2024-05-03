#include<stdio.h>
#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
	//printf("[%d %d %d %d], %d", nums[0], nums[1], nums[2], nums[3], target);
	map<int, int> mp;
	int findnum, n, flag = 0, flag2 = 0;
	for(int i = 0; i < nums.size(); i++){
		mp.insert(pair<int, int> (nums[i], 1));
		int nextnum = target - nums[i];
		if(nextnum == nums[i]){
			flag = 1;
		}else{
			flag = 2;
		}
		
		if (mp[nextnum] == 1){
			if(flag == 1){
				n = i;
				for(int j = 0; j < nums.size(); j++){
					if(nums[j] == nextnum && j !=n){
						findnum = j;
						flag2 = 1;
						break;
					}else{
						continue;
					}
				}
			}else{
				n = i;
				for(int j = 0; j < nums.size(); j++){
					if(nums[j] == nextnum){
						findnum = j;
						flag2 = 1;
						break;
					}
				}
				
			}
		}
		if(flag2 == 1){
			break;
		}
	}
	
	res.push_back(findnum);
	res.push_back(n);
	return res;   
}

int main(){
	vector<int> input;
	input.push_back(2);
	input.push_back(4);
	input.push_back(11);
	input.push_back(3);
	int target = 6;
	vector<int> res = twoSum(input, target);
	printf("[%d, %d]\n", res[0], res[1]);
	return 0;
}
