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
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* t1 = new ListNode();
        ListNode* t2 = new ListNode();
        ListNode* tmp = new ListNode();
        t1 = head;
        t2 = head;
        while(t1 != nullptr && t2 != nullptr){
            if(t1->next != nullptr){
                tmp = t1;
                t1 = t1 -> next;
            }else{
                break;
            }

            if(t2->next != nullptr){
                t2 = t2 -> next;
            }else{
                t1 = tmp;
                break;
            }

            if(t2->next != nullptr){
                t2 = t2 -> next;
            }else{
                break;
            }
        }

        return t1;
    }
};