// Add two number in a Linked List .

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

Node* addTwoNumbers(Node* l1,Node* l2) {
    int carry = 0;
    Node* temp1 = l1;
    Node* temp2 = l2;
    Node* sumList = new Node();
    Node* mover = sumList;

    while (temp1 != nullptr || temp2 != nullptr || carry != 0){
        int val1 = 0;
        int val2 = 0;

        if(temp1 != nullptr) {
            val1 = temp1->data;
        } 
        if(temp2 != nullptr) {
            val2 = temp2->data;
        }

        int sum = val1 + val2 + carry;

        int digit = sum % 10;
        carry = sum / 10;

        Node* newNode = new Node(digit);
        mover->next = newNode;
        mover = newNode;

        if(temp1 != nullptr) {
            temp1 = temp1->next;
        }

        if(temp2 != nullptr) {
            temp2 = temp2->next;
        }
    }
    
    return sumList->next;
}

int main() {


    
    return 0;
}