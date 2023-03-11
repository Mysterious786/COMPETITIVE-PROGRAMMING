#include "Main.h";

void deleteNode(Node * node) {
    Node *dummy = node->next;
    node->data = dummy->data;
    node->next = dummy->next;
    delete dummy;
    
}