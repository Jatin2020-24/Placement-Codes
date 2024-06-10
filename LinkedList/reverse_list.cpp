#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    public:
        Node(int data){
            this->data = data;
            next=NULL;
        }
};

int main(){
    Node* head = new Node(1);
    Node* fhead = head;

    for(int i=2;i<=10;i++){
        Node* a = new Node(i);
        head->next = a;
        head = head->next;
    }

    head = fhead;
    
    Node* newHead = NULL;
    while(head != NULL){
        Node *next = head->next;
        head->next = newHead;
        newHead = head;
        head = next;
    }

    while(newHead != NULL){
        cout<<newHead->data<<" ";
        newHead = newHead->next;
    }
}