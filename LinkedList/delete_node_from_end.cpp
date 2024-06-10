#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    public:
        Node(int data=0){
            this->data = data;
            next = NULL;
        }
};

int main(){
    int n; cin>>n;

    Node* head = new Node(1);
    Node* fhead = head;

    for(int i=2;i<=10;i++){
        Node* a = new Node(i);
        head->next = a;
        head=head->next;
    }

    head=fhead;

    Node* start = new Node();
    start->next = head;

    Node* slow = start;
    Node* fast = start;

    for(int i=1;i<=n;i++){
        fast = fast->next;
    }

    while(fast->next != NULL){
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = slow->next->next;
    
    start = start->next;

    // print start
}