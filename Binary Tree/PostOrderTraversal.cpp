// Post-Order Trsversal.

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void postorderTraversal(Node* node) {
    if(node == nullptr) {
        return;
    }

    postorderTraversal(node->left);
    
    postorderTraversal(node->right);
    cout << ' ' << node->data;
}

int main() {
    return 0;
}