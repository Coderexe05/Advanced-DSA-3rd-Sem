#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;  
    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};
class BST{
    Node* root;
    Node* insert(Node* temp, int value) {
        if (temp == NULL)
            return new Node(value);
        if (value < temp->data)
            temp->left = insert(temp->left, value);
        else if (value > temp->data)
            temp->right = insert(temp->right, value);
        return temp;
    }
    bool search(Node* temp, int key) {
        if (temp == NULL)
            return false;
        if (temp->data == key)
            return true;
        if (key < temp->data)
            return search(temp->left, key);
        else
            return search(temp->right, key);
    }
    void inorder(Node* root) {
        if (root == NULL)
            return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
public:
    BST() {
        root = NULL;
    }
    void insertvalue(int value) {
        root = insert(root, value);
    }
    bool searchvalue(int key) {
        return search(root, key);
    }
    void displayInorder() {
        inorder(root);
        cout << endl;
    }
};
int main() {
    BST tree;
    tree.insertvalue(50);
    tree.insertvalue(30);
    tree.insertvalue(20);
    tree.insertvalue(40);
    tree.insertvalue(70);
    tree.insertvalue(60);
    tree.insertvalue(80);
    cout << "Inorder traversal: ";
    tree.displayInorder();
    int keyToFind = 60;
    if (tree.searchvalue(keyToFind)) {
        cout << keyToFind << " found in the BST." << endl;
    } else {
        cout << keyToFind << " not found in the BST." << endl;
    }
    int keyMissing = 99;
    if (tree.searchvalue(keyMissing)) {
        cout << keyMissing << " found in the BST." << endl;
    } else {
        cout << keyMissing << " not found in the BST." << endl;
    }
    return 0;
}