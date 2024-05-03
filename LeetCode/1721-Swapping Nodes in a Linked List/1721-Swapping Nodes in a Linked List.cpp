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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* LN = new ListNode();
        ListNode* SN = new ListNode();
        ListNode* EN = new ListNode();
        LN = head;
        SN = head;
        EN = head;
        int n = 0;
        while(LN != nullptr){
            n++;
            LN = LN->next;
        }
        int i= 1, j = 0;
        while(i < k){
            i ++;
            SN = SN->next;
        }

        while(j < n - k){
            j ++;
            EN = EN->next;
        }
        int tmp;
        tmp = EN -> val;
        EN -> val = SN -> val;
        SN -> val = tmp;
        return head;
    }
};