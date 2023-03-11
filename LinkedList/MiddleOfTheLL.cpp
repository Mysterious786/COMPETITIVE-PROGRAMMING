#include"Main.h"
//-------------------------Middle of the Linked List ---------------------------

Node *findTheMid(Node *slow, Node *fast){
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *findMiddle(Node *head) {
    if(head == NULL) return NULL;
    Node *slow = head;
    Node *fast = head;
    return findTheMid(slow,fast);
}

