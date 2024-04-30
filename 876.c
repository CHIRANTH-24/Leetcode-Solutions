/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    if(head == NULL){
        return head;
    }
    struct ListNode* slow = head;
    struct ListNode* fast  = head;
    while(fast != NULL){
        if(fast -> next == NULL){
            return slow;
        }
        fast = fast -> next -> next;
        slow = slow -> next;
    }   
    return slow;
}