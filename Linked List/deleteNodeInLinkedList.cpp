// Delete Node in a Linked List

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

void deleteNodeInLinkedList(Node* node) {
    node->data = node->next->data;
    Node* temp = node->next;
    node->next = node->next->next;
    delete temp;
    return;
}

int main() {
    return 0;
}