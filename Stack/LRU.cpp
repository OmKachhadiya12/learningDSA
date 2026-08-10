//  Least Recently Used (LRU) cache.

#include<bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    class Node {
    public:
        int key;
        int value;
        Node* next;
        Node* prev;

        Node(int key_,int value_) {
            key = key_;
            value = value_;
        }
    };

    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);

    int cap;

    unordered_map<int,Node*> mpp;

    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void addNode(Node* newNode) {
        Node* temp = head->next;
        newNode->next = temp;
        newNode->prev = head;
        head->next = newNode;
        temp->prev = newNode;
    }

    void deleteNode(Node* delNode) {
        Node* front = delNode->next;
        Node* back = delNode->prev;
        front->prev = back;
        back->next = front;
    }
    
    int get(int key) {
        if(mpp.find(key) != mpp.end()) {
            Node* resNode = mpp[key];
            int res = resNode->value;
            mpp.erase(key);
            deleteNode(resNode);
            addNode(resNode);
            mpp[key] = head->next;
            return res;
        }

        return -1;
    }
    
    void put(int key_, int value) {
        
        if (mpp.find(key_) != mpp.end()) {
            Node* existingNode = mpp[key_];
            mpp.erase(key_);
            deleteNode(existingNode);
        }
        
        if (mpp.size() == cap) {
            mpp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        
        addNode(new Node(key_, value));
        mpp[key_] = head->next;
    }
};

int main() {
    return 0;
}