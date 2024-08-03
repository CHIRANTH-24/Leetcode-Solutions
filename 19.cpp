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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if((head == NULL) || (head -> next == NULL && n != 1)){
            return head;
        }
        if(head -> next == NULL && n == 1){
            return NULL;
        }
        int count = 1;
        ListNode* temp = head;
        while(temp -> next != NULL){
            count++;
            temp = temp -> next;
        }
        if(n > count || n < 1){
            return head;
        }
        int x = count - n + 1;
        ListNode* del = head;
        ListNode* dp = del;
        int pos = 1;
        if(x == 1){
            head = head -> next;
            return head;
        }
        while(pos != x && del -> next != NULL){
            pos++;
            dp = del;
            del = del -> next;
        }
        dp -> next = del -> next;
        return head;

    }
};