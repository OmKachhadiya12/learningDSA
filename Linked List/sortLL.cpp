// Sort Linked List.

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

Node* middleNode(Node* head) {
    Node* slow = head;
    Node* fast = head->next;

    while (fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node* mergeIt(Node* head1,Node* head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* temp = new Node();
    Node* mover = temp;

    while (temp1 != nullptr && temp2 != nullptr){
        if(temp1->data < temp2->data) {
            mover->next = temp1;
            mover = mover->next;
            temp1 = temp1->next;
        } else{
            mover->next = temp2;
            mover = mover->next;
            temp2 = temp2->next;
        }
    }

    if(temp1 != nullptr) {
        mover->next = temp1;
    }

    if(temp2 != nullptr) {
        mover->next = temp2;
    }

    return temp->next;
}

Node* sortIt(Node* head) {
    
    if(head == nullptr || head->next == nullptr) {
        return head;
    }

    Node* midNode = middleNode(head);

    Node* leftHead = head;
    Node* rightHead = midNode->next;
    midNode->next = nullptr;

    leftHead = sortIt(leftHead);
    rightHead = sortIt(rightHead);

    return mergeIt(leftHead,rightHead);
    
}

int main() {
    int arr[5] = {5,4,3,2,1};
    
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
    head = sortIt(head);
    Node* tempp = head;

    while (tempp != nullptr){
        cout << tempp->data << "o";
        tempp = tempp->next;
    }
    return 0;
}