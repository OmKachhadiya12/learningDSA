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

vector<int> preOrderTraversal(Node* root) {
    vector<int> ans;

    if(root == nullptr) {
        return ans;
    }

    stack<Node*> st;
    st.push(root);

    while (!st.empty()) {
        root = st.top();
        ans.push_back(root->data);
        if(root->right != nullptr) {
            st.push(root->right);
        }
        if(root->left != nullptr) {
            st.push(root->left);
        }
    }
    
    return ans;
}

int main() {
    return 0;
}