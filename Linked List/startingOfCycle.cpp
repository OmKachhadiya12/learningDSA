// Starting of Cycle Linked List Cycle.

#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
    int data;
    Node* next;

    public:
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

Node* icCycle(Node* head) {
    if (head == nullptr) return nullptr;
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            break;
        }
    }

    if (fast == nullptr || fast->next == nullptr) {
        return nullptr;
    }
    
    slow = head;

    while (slow != fast){
        slow = slow ->next;
        fast = fast->next;
    }
    
    return slow;
}

int main() {

    

    return 0;
}