

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode*cur = head;
    struct ListNode* prev = NULL;
    
    if(head == NULL){
        return head;
    }
    if(head -> next == NULL){
        return head;
    }
    struct ListNode* temp = head -> next;
    while(temp -> next != NULL){
        cur -> next = prev;
        prev = cur;
        cur = temp;
        temp = temp -> next;
    }
    cur -> next = prev;
    temp -> next = cur;
    return temp;
}