#include "Main.h"

Node* sortTwoLists(Node* first, Node *second)
{
    //Edge cases
    if(first == NULL) return second;
    if(second == NULL) return first;
    if(first == NULL && second == NULL) return NULL;
    Node* dummyHead = NULL;
    //Finding the start node to point dummyHead
    if(first->data <= second->data) {
        dummyHead = first;
        first = first->next;
    }
    else{
        dummyHead = second;
        second = second->next;
    }
    Node* dummyTail = dummyHead;
    while(first && second)
    {
        Node* temp = NULL;
        if(first->data <= second->data){
            temp=first;
            first=first->next;
        }
        else{
            temp = second;
            second = second->next;
        }
        dummyTail->next = temp;
        dummyTail=temp;
    }
    //End of while loop

    // Checking left list node
    //We know one any one of the list is completed 
    if(first!=NULL){
    dummyTail->next = first;
    }
    if(second != NULL){
        dummyTail->next = second;
    }
    return dummyHead;

}
