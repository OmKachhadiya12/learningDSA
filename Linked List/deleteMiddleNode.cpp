// Delete the Middle of the Linked List .

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

Node* deleteMiddle(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    } 

    Node* prev = nullptr;
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = slow->next;
    delete slow;

    return head;
    
}

int main() {

    

    return 0;
}