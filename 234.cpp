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
 #include<stack>
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int i,j;
        stack<int> v;
        ListNode* temp = head;
        ListNode* check = head;
        while(temp != NULL){
            v.push(temp->val);
            temp = temp -> next;
        }
        while(check != NULL){
            if(check->val != v.top()){
                return false;
            }
            v.pop();
            check = check -> next;
        }
        
        return true;
    }
};