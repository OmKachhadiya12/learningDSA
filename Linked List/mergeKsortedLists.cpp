// Merge the K's Sorted Linked List.

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

// Node* mergeTwoList(Node* head1,Node* head2) {
//     Node* temp1 = head1;
//     Node* temp2 = head2;
//     Node* temp = new Node();
//     Node* mover = temp;

//     while (temp1 != nullptr && temp2 != nullptr){
//         if(temp1->data < temp2->data) {
//             mover->next = temp1;
//             mover = mover->next;
//             temp1 = temp1->next;
//         } else{
//             mover->next = temp2;
//             mover = mover->next;
//             temp2 = temp2->next;
//         }
//     }

//     while (temp1 != nullptr){
//         mover->next = temp1;
//         mover = mover->next;
//         temp1 = temp1->next;
//     }
    
    
//     while (temp2 != nullptr){
//         mover->next = temp2;
//         mover = mover->next;
//         temp2 = temp2->next;
//     }

//     return temp->next;
// }

// Node* mergeIt(vector<Node*> lists) {
//     Node* head = lists[0];

//     for (int i=1;i<lists.size();i++){
//         head = mergeTwoList(head,lists[i]);
//     }

//     return head;
// }

Node* mergeKLists(vector<Node*>& lists) {

    struct cmp {
        bool operator()(Node* a, Node* b) {
            return a->data > b->data;
        }
    };

    priority_queue<Node*, vector<Node*>, cmp> pq;

    // push first node of every list
    for (int i = 0; i < lists.size(); i++) {
        if (lists[i] != NULL) {
            pq.push(lists[i]);
        }
    }

    Node* dummy = new Node(-1);
    Node* tail = dummy;

    while (!pq.empty()) {

        Node* temp = pq.top();
        pq.pop();

        tail->next = temp;
        tail = tail->next;

        if (temp->next != NULL) {
            pq.push(temp->next);
        }
    }

    return dummy->next;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    
    Node* head1 = new Node(arr[0]);
    Node* mover1 = head1;

    for (int i=1;i<5;i++){
        Node* temp = new Node(arr[i]);
        mover1-> next = temp;
        mover1 = temp;
    }

    int arr2[5] = {1,2,3,4,5};
    
    Node* head2 = new Node(arr[0]);
    Node* mover2 = head2;

    for (int i=1;i<5;i++){
        Node* temp = new Node(arr2[i]);
        mover2-> next = temp;
        mover2 = temp;
    }
    
    // Traversal in Linked List

    Node* temp = head1;

    while (temp != nullptr){
        cout << temp->data << "o";
        temp = temp->next;
    }
    cout << endl;
    //head1 = mergeIt(head1,head2);
    Node* tempp = head1;

    while (tempp != nullptr){
        cout << tempp->data << "o";
        tempp = tempp->next;
    }
    return 0;
}