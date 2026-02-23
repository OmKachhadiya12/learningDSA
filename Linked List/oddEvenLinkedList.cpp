// Odd Even Linked List .

#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }

    Node() {
        data = 0;
        next = nullptr;
    }
};

Node* oddEvenLinkedlist(Node* head) {
    if(head == nullptr || head->next == nullptr) {
        return head;
    }

    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = head->next;

    while (even != nullptr || even->next != nullptr){
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;     
    }

    odd->next = evenHead;

    return head;
    
}

int main() {

    

    return 0;
}