#include "Node.h"
using namespace std; 
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<"["<<temp->data<<"]"<<"--->";
        temp=temp->next;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
    while(data!=-1){
        Node* newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;

        }
        else{
            tail->next = newNode;
            tail= tail->next;
        }
        cout<<"Enter the data"<<endl;
        cin>>data;
    }
    display(head);
    cout<<"NULL";
    return 0;
}