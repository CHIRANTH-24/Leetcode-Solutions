/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<map>
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = head;
        map<ListNode*,bool> v;
        while(temp != NULL){
            if(v[temp] == true){
                return temp;
            }
            v[temp] = true;
            temp = temp -> next;
        }
        return NULL;
    }
};