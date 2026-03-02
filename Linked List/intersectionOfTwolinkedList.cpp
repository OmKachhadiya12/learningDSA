// Intersection of Two Linked List .

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

Node* Intersection(Node* head1,Node* head2) {
    // Node* temp = head1;
    // unordered_map<Node*,int> mpp;

    // while (temp != nullptr){
    //     mpp[temp] = 1;
    //     temp = temp->next;
    // }

    // temp = head2;
    // while (temp != nullptr){
    //     if(mpp.find(temp) == temp) {
    //         return temp;
    //     }

    //     temp = temp->next;
    // }

    // return nullptr;

   if (head1 == nullptr || head2 == nullptr) {
    return nullptr;
    }

    Node* temp1 = head1;
    Node* temp2 = head2;

    while (temp1 != temp2) {
        temp1 = (temp1 == nullptr) ? head2 : temp1->next;
        temp2 = (temp2 == nullptr) ? head1 : temp2->next;
    }

    return temp1;   
    
    
}

int main() {

    

    return 0;
}