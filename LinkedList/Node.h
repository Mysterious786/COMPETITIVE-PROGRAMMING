#include<bits/stdc++.h>
class Node {
     public:
    Node* next;
    int data;
   
    Node(int data){
        this->data = data;
        next = NULL;
    }
};