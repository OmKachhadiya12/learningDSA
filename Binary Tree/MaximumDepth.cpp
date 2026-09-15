// Maximum Depth.

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


int maxDepth(Node* root) {
    if(root == nullptr) {
        return 0;
    } 

    int left = maxDepth(root->left);
    int right= maxDepth(root->right);

    return 1 + max(left,right);
}

int main() {
    return 0;
}