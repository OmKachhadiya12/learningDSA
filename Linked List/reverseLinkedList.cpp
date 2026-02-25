// Reverse Linked List.

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

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

Node* reverseIt(Node* head) {
    if(head == nullptr || head->next == nullptr) {
        return head;
    }
    Node* newHead = reverseIt(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = nullptr;

    return newHead;
}

// Node* reverseIt(Node* head) {
//     if (head == nullptr || head->next == nullptr){
//         return head;
//     }
    
//     Node* prev = nullptr;
//     Node* temp = head;

//     while (temp != nullptr){
//         Node* front = temp->next;
//         temp->next = prev;
//         prev = temp;
//         temp = front;
//     }
    
//     return prev;
// }

int main() {
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
        cout << temp->data << "o";
        temp = temp->next;
    }
    cout << endl;
    head = reverseIt(head);
    Node* tempp = head;

    while (tempp != nullptr){
        cout << tempp->data << "o";
        tempp = tempp->next;
    }
    return 0;
}