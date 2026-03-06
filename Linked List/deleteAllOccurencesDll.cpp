// Delete all Occurrences of a Key from the Doubly Linked List.

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

    Node() {
        data = 0;
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

Node* deleteAllOccurrences(Node* head,int key) {
    if(head == nullptr){
        return nullptr;
    }
    Node* mover = head;
    
    while (mover != nullptr){
        Node* nextNode = mover->next;
        if(mover->data == key && mover->back == nullptr) {
            head = mover->next;
            if(head != nullptr){
                head->back = nullptr;
            }
        } else if(mover->next == nullptr && mover->data == key) {
            Node* prev = mover->back;
            prev->next = nullptr;
        } else if(mover->data == key) {
            Node* prev = mover->back;
            Node* front = mover->next;

            prev->next = front;
            front->back = prev;
        }
        mover = nextNode;
    }
    
    return head;
    
}

int main() {
    
    int arr[10] = {10,2,3,10,5,10,10,10,10,10};

    Node* head = convertToDLL(arr,10);

    Node* temp = head;
    while (temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }    

    cout << endl;

    head = deleteAllOccurrences(head,10);
    Node* teemp = head;
    while (teemp != nullptr){
        cout << teemp->data << " ";
        teemp = teemp->next;
    }     

    return 0;
}