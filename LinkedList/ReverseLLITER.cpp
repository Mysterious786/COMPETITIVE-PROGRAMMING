#include"Main.h"

Node *reverseLinkedList(Node *head) 
{
    if(head == NULL) return NULL;
    Node *dummy = NULL;

    while(head)
    {

      Node *  nexti = head->next;
        head->next = dummy;
        dummy=head;
        head=nexti;
    }
    return dummy;
    
}