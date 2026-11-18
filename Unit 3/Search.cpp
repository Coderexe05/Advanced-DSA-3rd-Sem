#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    }   
    return root;
}
Node* search(Node* root, int key) {
    if (root == nullptr || root->data == key) {
        return root;
    }
    if (key < root->data) {
        return search(root->left, key);
    }
    return search(root->right, key);
}
int main() {
    Node* root = nullptr;   
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    int key1 = 60;
    Node* result1 = search(root, key1);
    if (result1 != nullptr) {
        cout << "Found " << key1 << " in the BST.\n";
    } else {
        cout << key1 << " not found in the BST.\n";
    }
    int key2 = 90;
    Node* result2 = search(root, key2);
    if (result2 != nullptr) {
        cout << "Found " << key2 << " in the BST.\n";
    } else {
        cout << key2 << " not found in the BST.\n";
    }
    return 0;
}