#include "Node.h"
using namespace std;
void hashAndRemove(Node* head){
    unordered_map<Node*,int> mp;
    Node* temp=head;
    Node* last = NULL;
    while(temp!=NULL){
        if(mp.find(temp)==mp.end()){
            mp[temp]++;
            last = temp;
            temp=temp->next;

        }
        else{
            last ->next =NULL;
            break;
        }
    }
}