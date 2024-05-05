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
 #include<vector>
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        int i = 0;
        ListNode* cur = head;
        ListNode* temp = head;
        vector<int> v;
        while(cur != NULL){
            v.push_back(cur->val);
            cur = cur -> next;
        }
        sort(v.begin(),v.end());
        for(i = 0; i < v.size(); i++){
            temp -> val = v[i];
            temp = temp -> next;
        }
        return head;
    }
};