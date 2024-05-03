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
    bool isPalindrome(ListNode* head) {
        ListNode* lengthNode = new ListNode();
        ListNode* startNode = new ListNode();
        ListNode* middleNode = new ListNode();
        lengthNode = head;
        startNode = head;
        middleNode = head;
        int length = 0;
        while(lengthNode != nullptr){
            length ++;
            lengthNode = lengthNode -> next;
        }
        printf("%d\n", length);
        int l1 = length / 2;
        if(length % 2 == 0){
            length = length / 2;
        }else{
            length = length / 2 + 1;
        }
        for(int i = 0; i < length; i++){
            middleNode = middleNode -> next;
        }
        ListNode* newNode = new ListNode();
        ListNode* tmp = new ListNode();
        newNode ->next = middleNode;
        for(int i = 0; i < l1 - 1; i++){
            if(i == l1 - 2){
                tmp = middleNode->next;
                middleNode -> next = nullptr;
                tmp -> next = newNode -> next;
                newNode -> next = tmp;
            }else{
                tmp = middleNode->next;
                middleNode->next= tmp -> next;
                tmp -> next = newNode -> next;
                newNode -> next = tmp;
            }
            
        }
        while(newNode->next != nullptr && startNode != nullptr){
            //printf("%d %d\n", newNode -> next->val, startNode -> val);
            if(newNode->next ->val != startNode -> val){
                //printf("%d %d\n", newNode ->val, startNode -> val);
                return false;
            }
            startNode = startNode -> next;
            newNode = newNode -> next;
        }
        return true;
    }
};