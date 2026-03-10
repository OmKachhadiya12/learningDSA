// Reverse Nodes in k-Group

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

Node* KthNode(Node* temp,int k) {
    k -= 1;

    while (temp != nullptr && k > 0){
        temp = temp->next;
        k--;
    }
    
    return temp;
}

Node* reverseLinkedList(Node* head) {
    if(head == nullptr || head->next == nullptr) {
        return head;
    }
    Node* newHead = reverseLinkedList(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = nullptr;

    return newHead;
}


Node* reverseIt(Node* head,int k) {
    Node* prevLast = nullptr;
    Node* temp = head;

    while (temp != nullptr){
       Node* kthNode = KthNode(temp,k);

       if (kthNode == nullptr) {
            if(prevLast) {
                prevLast->next = temp;
            }
            break;
       }

       Node* nextNode = kthNode->next;
       kthNode->next = nullptr;
       Node* newHead = reverseLinkedList(temp);

       if (temp == head){
            head = newHead;
       } else {
            prevLast->next = newHead;
       }

       prevLast = temp;
       temp = nextNode;
       
    }

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
    head = reverseIt(head,3);
    Node* tempp = head;

    while (tempp != nullptr){
        cout << tempp->data << "o";
        tempp = tempp->next;
    }
    return 0;
}