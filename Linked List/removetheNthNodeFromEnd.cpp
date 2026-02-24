// Remove the N-th Node from the end of Linked list.

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

Node* removeNthFromEnd(Node* head,int n) {
    Node* slow = head;
    Node* fast = head;
    
    for (int i=0;i<n;i++){
        fast = fast->next;
    }

    if (fast == nullptr){
        return head->next;
    }
    
    while (fast->next != nullptr){
        slow = slow->next;
        fast = fast->next;
    }
    
    Node* temp = slow->next;
    slow->next = temp->next;
    delete temp;

    return head;
    
}
 
int main() {
    return 0;
}