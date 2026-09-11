// In-Order Traversal.

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

void inorderTraversal(Node* node) {
    if(node == nullptr) {
        return;
    }

    inorderTraversal(node->left);
    cout << ' ' << node->data;
    inorderTraversal(node->right);
}

int main() {
    return 0;
}