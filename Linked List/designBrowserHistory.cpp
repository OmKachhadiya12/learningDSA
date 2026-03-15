// Design Browser History.

#include<bits/stdc++.h>
using namespace std;

struct Node{
    string data;
    Node* prev;
    Node* next;

    Node(string data1,Node* prev1,Node* next1) {
        data = data1;
        prev = prev1;
        next = next1;
    }

    Node(string data1) {
        data = data1;
        prev = nullptr;
        next = nullptr;
    }
};

class Browser {
    Node* current;
    
    Browser(string homepage) {
        current = new Node(homepage);
    }

    void visit(string url) {
        Node* newNode = new Node(url);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
        return;
    }

    string back(int steps) {
        while (steps > 0) {
            if(current->prev) {
                current = current->prev;
            } else {
                break;
            }
            steps--;
        }
        return current->data;
    }

    string forward(int steps) {
        while (steps > 0){
            if(current->next) {
                current = current->next;
            } else {
                break;
            }
            steps--;
        }
        return current->data;         
    }
};

// Node* convertToDoubly(int arr[],int n) {
//     Node* head = new Node(arr[0]);
//     Node* mover = head;

//     for (int i=1;i<n;i++){
//         Node* temp = new Node(arr[i],mover,nullptr);
//         mover->next = temp;
//         mover = temp;
//     }
    
//     return head;
// }

int main() {
    return 0;
}