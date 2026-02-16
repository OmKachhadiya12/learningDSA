// Linked List .

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
};

// Length of Linked List;

int lengthOfLL(Node* head) {
    int count = 0;
    Node* temp = head;

    while (temp != nullptr){
        temp = temp->next;
        count++;
    }

    return count;
    
}

int main() {

    // Node* n1 = new Node(2,nullptr);
    // cout << n1->data;
    // cout << n1->next;

    // Array to Linked List

    int arr[5] = {1,2,3,4,5};
    
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i=1;i<5;i++){
        Node* temp = new Node(arr[i]);
        mover-> next = temp;
        mover = temp;
    }
    
    // Traversal in Linked List

    Node* temp = head;

    while (temp != nullptr){
        cout << temp->data;
        temp = temp->next;
    }
    
    int length = lengthOfLL(head);

    return 0;
}