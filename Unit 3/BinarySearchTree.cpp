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
class BST {
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
    void displayInorder() {
        inorder(root);
        cout << endl;
    }
};
int main() {
    BST tree;
    tree.insertvalue(50);
    tree.insertvalue(30);
    tree.insertvalue(70);
    tree.insertvalue(20);
    tree.insertvalue(40);
    tree.insertvalue(60);
    tree.insertvalue(80);
    cout << "Inorder traversal of the BST: ";
    tree.displayInorder();
    return 0;
}