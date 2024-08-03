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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* prev = head ;
        ListNode* curr = prev->next ;
        int sum = 0 ;
        while (curr!=nullptr){
            if(curr->val!=0)
                sum+=curr->val ;
            else{
                prev->next->val = sum ;
                prev->next->next = curr->next ;
                prev = curr ;
                sum=0 ;
            }
            curr=curr->next ;
        }
        head = head->next ;
        return head ;
    }
};