// Pre-Order traversal.

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

void PreOrderTraversal(Node* node) {
    if(node == nullptr) {
        return;
    }

    cout << " " << node->data;

    PreOrderTraversal(node->left);
    PreOrderTraversal(node->right);
}


int main() {
    return 0;
}