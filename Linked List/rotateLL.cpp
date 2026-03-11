// Rotate the Linked List.

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

Node* rotateLL(Node* head,int k) {
    // if(head == nullptr) {
    //     return nullptr;
    // }
    // Node* temp = head;
    // int length = 1;

    // while (temp->next != nullptr){
    //     length++;
    //     temp = temp->next;
    // }
    
    // k = k % length;
    // if (k == 0){
    //     return head;
    // }
    
    // int k2 = length - k;
    // temp = head;

    // while (k2 > 1){
    //     temp = temp->next;   
    //     k2--;
    // }

    // Node* newHead = temp->next;
    // Node* nextNode = newHead;

    // temp->next = nullptr;

    // while (nextNode->next != nullptr){
    //     nextNode = nextNode->next;
    // }

    // nextNode->next = head;

    // return newHead;

    if(head == nullptr) {
        return nullptr;
    }
    
    Node* tail = head;
    int length = 1;

    while (tail->next != nullptr){
        tail = tail->next;
        length++;
    }

    tail->next = head;
    
    k = k % length;
    if(k == 0) {
        tail->next = nullptr;
        return head;
    }
    int k2 = length - k;
    Node* temp = head;

    while (k2 > 1){
        temp = temp->next;
        k2--;
    }

    head = temp->next;
    temp->next = nullptr;

    return head;
    
}

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
    head = rotateLL(head,3);
    Node* tempp = head;

    while (tempp != nullptr){
        cout << tempp->data << "o";
        tempp = tempp->next;
    }
    return 0;
}