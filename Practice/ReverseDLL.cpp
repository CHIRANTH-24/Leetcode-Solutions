/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    if(head == NULL){
        return head;
    }
    if(head -> next == NULL){
        return head;
    }
    
    Node* p = NULL;
    Node* cur = head;
    Node* temp = cur -> next;
    while(cur -> next != NULL){
        cur -> next = p;
        p = cur;
        cur -> prev = temp;
        cur = temp;
        temp = temp -> next;
    }
    cur -> prev = NULL;
    cur -> next = p;
    head = cur;
    return head;
    // Write your code here   
}

