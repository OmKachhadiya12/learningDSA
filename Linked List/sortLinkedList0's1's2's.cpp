// Sort the Linked List of 0's , 1's and 2's.

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

Node* sort(Node* head) {
    Node* zeroHead = new Node();
    Node* oneHead = new Node();
    Node* twoHead = new Node();

    Node* zero = zeroHead;
    Node* one = oneHead;
    Node* two = twoHead;

    Node* temp = head;

    while (temp != nullptr){
        if(temp->data == 0) {
            zero->next = temp;
            zero = zero->next;
        } else if(temp->data == 1) {
            one->next = temp;
            one = one->next;
        } else {
            two->next = temp;
            two = two->next;
        }

        temp = temp->next;
    }
    
    if (oneHead->next != nullptr) {
        zero->next = oneHead->next;
    } else {
        zero->next = twoHead->next;
    }

    one->next = twoHead->next;

    two->next = nullptr;

    if (zeroHead->next != nullptr)
        return zeroHead->next;
    else if (oneHead->next != nullptr)
        return oneHead->next;
    else
        return twoHead->next;
}

int main() {
    return 0;
}