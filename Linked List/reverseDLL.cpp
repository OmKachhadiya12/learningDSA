// Reverse the Doubly Linked List.

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* back;
    Node* next;

    Node(int data1,Node* back1,Node* next1) {
        data = data1;
        back = back1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        back = nullptr;
        next = nullptr;
    }
};

Node* convertToDLL(int arr[],int n) {
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i=1;i<n;i++){
        Node* temp = new Node(arr[i],mover,nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;    
}

Node* reverseDLL(Node* head) {
    if(head == nullptr || head->next == nullptr) {
        return head;
    } 
    Node* curr = head;
    Node* last = nullptr;

    while (curr != nullptr){
        swap(curr->back,curr->next);

        last = curr;

        curr = curr->back;
    }
    
    return last;
}

int main() {
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    Node* head = convertToDLL(arr,10);

    Node* temp = head;
    while (temp != nullptr){
        cout << temp->data;
        temp = temp->next;
    }    

    cout << endl;

    head = reverseDLL(head);
    Node* teemp = head;
    while (teemp != nullptr){
        cout << teemp->data;
        teemp = teemp->next;
    }     

    return 0;
}