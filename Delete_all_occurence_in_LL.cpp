/**
 * Definition of doubly linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * deleteAllOccurrences(Node* head, int k) {
    if(head == NULL){
        return head;
    }
    Node* temp = head;
    while (temp->next != NULL) {
            if(temp -> prev == NULL && temp -> data == k){
                head = temp -> next;
                head -> prev = NULL;
            }
            if(temp -> prev != NULL && temp -> data == k){
            temp -> next -> prev = temp -> prev;
            temp -> prev -> next = temp -> next;
            }
        temp = temp -> next;
    }
    if(temp -> prev != NULL && temp -> data == k ){
        temp -> prev -> next = NULL;
        return head;
    }
    if(temp -> prev == NULL && temp -> data == k){
        return NULL;
    }
    return head;
}
