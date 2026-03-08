// Find all the Pairs with given Sum from the Doubly Linked List.

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* back;
    Node* next;

    Node(int data1,Node* back1,Node* next1) {
        data = data1;
        back = back1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        back = nullptr;
        next = nullptr;
    }

    Node() {
        data = 0;
        back = nullptr;
        next = nullptr;
    }
};

Node* convertToDLL(int arr[],int n) {
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i=1;i<n;i++){
        Node* temp = new Node(arr[i],mover,nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;    
}

vector<pair<int,int>> findPairs(Node* head,int sum) {
    Node* left = head;
    Node* right = head;
    vector<pair<int,int>> ans;

    if(head == nullptr) {
        return ans;
    }

    while (right->next != nullptr){
        right = right->next;
    }

    int currSum = left->data + right->data;

    while (left != right && right->next != left){
        if(currSum == sum) {
            ans.push_back({left->data,right->data});
            left = left->next;
            right = right->back;
        } else if(currSum > sum) {
            right = right->back;
        } else {
            left = left->next;
        }
    }
    
    return ans;
    
}

int main() {
    
    int arr[10] = {10,2,3,10,5,10,10,10,10,10};

    Node* head = convertToDLL(arr,10);

    Node* temp = head;
    while (temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }    

    cout << endl;

    vector<pair<int,int>> answer = findPairs(head,10);
    Node* teemp = head;
    while (teemp != nullptr){
        cout << teemp->data << " ";
        teemp = teemp->next;
    }     

    return 0;
}