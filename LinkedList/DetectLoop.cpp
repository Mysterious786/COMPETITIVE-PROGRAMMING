//There are two approaches to solve this problem 
// 1. Using Map which will take O(n) as space complexity
// 2. Using optimized solution using O(1)
//    
                    //                    1
#include<bits/stdc++.h>
#include "Node.h"
bool detectLoop(Node* head){
unordered_map<Node*> mp;
// The data given to us we dont need to work on that instead always work on the copied data
Node* temp = head;
while(temp!=NULL){
    if(mp.find(temp)!=mp.end()) return true;
    mp.insert(temp);
    temp=temp->next;

}

return false;

}



//                                           2

bool detectLoop(Node* head){
// Using Hare Tortoise Method
Node* fast = head;
Node* slow = head;
//This loop will only terminate if got the loop element if there is a loop....
while(fast && fast->next){
    
    fast = fast->next->next;
    slow = slow->next->next;
    if(slow == fast) return true;
}
return false;

#include "Node.h"
void detectAndRemoveLoop(Node* head)
{
    // If list is empty or has only one node without loop
    if (head == NULL || head->next == NULL)
        return;
  
    Node *slow = head, *fast = head;
  
    // Move slow and fast 1 and 2 steps ahead respectively.
    slow = slow->next;
    fast = fast->next->next;
  
    // Search for loop using slow and fast pointers
    while (fast && fast->next) {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }
  
    /* If loop exists */
    if (slow == fast) {
        slow = head;
  
        // this check is needed when slow and fast both meet
        // at the head of the LL eg: 1->2->3->4->5 and then
        // 5->next = 1 i.e the head of the LL
        if (slow == fast)
            while (fast->next != slow)
                fast = fast->next;
        else {
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
        }
  
        /* since fast->next is the looping point */
        fast->next = NULL; /* remove loop */
    }
}
