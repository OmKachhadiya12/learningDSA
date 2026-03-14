// Copy List with Random Pointer. 

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

Node*copyRandomList(Node* head) {
    // Node* temp = head;
    // unordered_map<Node*,Node*> mpp;

    // while (temp != nullptr){
    //     Node* newNode = new Node(temp->data);
    //     mpp[temp] = newNode;
    //     temp = temp->next;
    // }

    // temp = head;
    // Node* copy;

    // while (temp != nullptr){
    //     copy = mpp[temp];
    //     copy->next = mpp[temp->next];
    //     copy->random = mpp[temp->random];
    //     temp = temp->next;
    // }
    
    // return mpp[head];

    Node* curr = head;
    Node* copy;

    while (curr != nullptr){
        copy = new Node(curr->data);
        copy->next = curr->next;
        curr->next = copy;
        curr = copy->next;
    }

    curr = head;

    while (curr != nullptr){
        if(curr->random != nullptr) {
            curr->next->random = curr->random->next;
        }
        curr = curr->next->next;
    }
    
    Node* dummy = new Node();
    Node* mover = dummy;
    curr = head;

    while (curr != nullptr){
         Node* copy = curr->next;

        mover->next = copy;
        mover = mover->next;

        curr->next = copy->next;
        curr = curr->next;
    }
    
    return dummy->next;
}

int main() {

    

    return 0;
}