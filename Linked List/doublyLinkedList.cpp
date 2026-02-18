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

int main() {

    int arr[5] = {1,2,3,4,5};
    
    Node* head = convertToDoubly(arr,5);

    Node* temp = head;
    while (temp != nullptr){
        cout << temp->data;
        temp = temp->next;
    }
    

    return 0;
}