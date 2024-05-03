#include<stdio.h>

using namespace std;


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode();
        ListNode* repeat = res;
        int tens = 0;
        while(l1 != nullptr && l2 != nullptr){
            int a1 = l1->val, a2 = l2->val;
            ListNode* next = new ListNode();
            if(a1 + a2 + tens>= 10){
                next->val = (a1 + a2 + tens) % 10;
                tens = 1;
            }else{
                next->val = (a1 + a2 + tens);
                tens = 0;
            }
            repeat->next = next;
            repeat = next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1 != nullptr){
            ListNode* next = new ListNode();
            int a1 = l1->val;
            if(a1 + tens>= 10){
                next->val = (a1 + tens) % 10;
                tens = 1;
            }else{
                next->val = (a1 + tens);
                tens = 0;
            }
            repeat->next = next;
            repeat = next;
            l1 = l1->next;
        }

        while(l2 != nullptr){
            ListNode* next = new ListNode();
            int a2 = l2->val;
            if(a2 + tens>= 10){
                next->val = (a2 + tens) % 10;
                tens = 1;
            }else{
                next->val = (a2 + tens);
                tens = 0;
            }
            repeat->next = next;
            repeat = next;
            l2 = l2->next;
        }
        if(tens != 0){
            ListNode* next = new ListNode();
            next->val = tens;
            repeat->next = next;
        }
        return res->next;
    }
};*/

int main(){
	return 0;
} 
