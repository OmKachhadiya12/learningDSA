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

// Deletion of Head
Node* deleteHead(Node* head) {
    Node* temp = head;
    head = head->next;
    delete temp;
    return head; 
}

// Deletion of Tail
Node* deleteTail(Node* head) {
    if(head == nullptr || head->next == nullptr) {
        return nullptr;
    }
    
    Node* curr = head;
    while (curr->next->next != nullptr){
        curr = curr->next;
    }

    Node* temp = curr->next;
    curr->next = nullptr;
    delete temp; 
    
    return head;
}

// Deletion K-th Element
Node* deleteKthElement(Node* head,int k) {
    if(head == nullptr) {
        return head;
    }
    if(k == 1) {
        Node* temp = head;
        head = temp->next;
        delete temp;
        return head;
    }

    int count = 1;
    Node* temp = head;
    Node* prev = nullptr;

    while (temp != nullptr){
        prev = temp;
        temp = temp->next; 
        count++;
        if(count == k) {
            break;
        }
    }
    if(temp == nullptr) {
        return head;
    }
    prev->next = temp->next;
    delete temp;
    return head;
    
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
        cout << temp->data << "o";
        temp = temp->next;
    }
    
    int length = lengthOfLL(head);

    head = deleteKthElement(head,3);
    Node* tempp = head;

    while (tempp != nullptr){
        cout << tempp->data << "o";
        tempp = tempp->next;
    }

    return 0;
}