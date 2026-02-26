// Add one to the Linked List.

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

Node* addOne(Node* head) {
    if(head == nullptr) {
        return nullptr;
    }
    Node* lastNon9 = nullptr;
    Node* temp = head;

    while (temp != nullptr) {
        if (temp->data != 9) {
            lastNon9 = temp;
        }
        temp = temp->next;
    }
    
    if(lastNon9 == nullptr) {
        Node* newNode = new Node(1);
        newNode->next = head;
        Node* temp2 = head;
        while (temp2 != nullptr){
            temp2->data = 0;
            temp2 = temp2->next;
        }
        return newNode;
    } else {
        lastNon9->data = lastNon9->data + 1;

        Node* temp2 = lastNon9->next;
        while (temp2 != nullptr){
            temp2->data = 0;
            temp2 = temp2->next;
        }
        return head;
    }
}

int main() {
    int arr[5] = {1,2,9,4,5};
    
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
    head = addOne(head);
    Node* tempp = head;

    while (tempp != nullptr){
        cout << tempp->data << "o";
        tempp = tempp->next;
    }
    return 0;
}