// Doubly Linked List.

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;

    Node(int data1,Node* prev1,Node* next1) {
        data = data1;
        prev = prev1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        prev = nullptr;
        next = nullptr;
    }
};

Node* convertToDoubly(int arr[],int n) {
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i=1;i<n;i++){
        Node* temp = new Node(arr[i],mover,nullptr);
        mover->next = temp;
        mover = temp;
    }
    
    return head;
}

// Deletion of Head
Node* deleteHead(Node* head) {
    if (head == nullptr || head->next == nullptr){
        return nullptr;
    }
    
    Node* temp = head;
    head = head->next;
    head->prev = nullptr;
    temp->next = nullptr;
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
    temp->prev = nullptr;
    delete temp;
    return head;
}

// Deletion of K-th Pos
Node* deleteKth(Node* head,int k) {
    if(head == nullptr) {
        return nullptr;
    }

    if(k == 1) {
        Node* temp = head;
        head = head->next;
        if (head != nullptr){
            head->prev = nullptr;
        }
        
        temp->next = nullptr;
        delete temp;
        return head;
    }

    int count = 1;
    Node* curr = head;

    while (curr != nullptr && count < k){
        curr = curr->next;
        count++;
    }

    if(curr == nullptr) {
        return head;
    }
    
    Node* front = curr->next;
    Node* back = curr->prev;

    if (back != nullptr) {
        back->next = front;
    }

    if (front != nullptr) {   
        front->prev = back;
    }
    
    delete curr;
    return head;
    
}

int main() {

    int arr[5] = {1,2,3,4,5};
    
    Node* head = convertToDoubly(arr,5);

    Node* temp = head;
    while (temp != nullptr){
        cout << temp->data;
        temp = temp->next;
    }
    
    cout << endl;
    head = deleteKth(head,4);
    Node* teemp = head;
    while (teemp != nullptr){
        cout << teemp->data;
        teemp = teemp->next;
    }

    return 0;
}