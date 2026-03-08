// Remove the Duplicates  from the Sorted Doubly Linked List.

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

Node* remove(Node* head) {
    if(head == nullptr){
        return nullptr;
    }
    Node* mover = head;
    
    while (mover != nullptr && mover->next != nullptr){
        if(mover->next->data == mover->data) {
            Node* delNode = mover->next;
            Node* front = delNode->next;

            mover->next = front;

            if(front != nullptr) {
                front->back = mover;
            }
        } else {
            mover = mover->next;
        }
    }
    
    return head;
    
}

int main() {
    
    int arr[10] = {1,1,3,4,5,5,7,8,9,10};

    Node* head = convertToDLL(arr,10);

    Node* temp = head;
    while (temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }    

    cout << endl;

    head = remove(head);
    Node* teemp = head;
    while (teemp != nullptr){
        cout << teemp->data << " ";
        teemp = teemp->next;
    }     

    return 0;
}