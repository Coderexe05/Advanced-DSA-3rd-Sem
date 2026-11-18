// Program to Find the height of the Binary Tree
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
int customMax(int a, int b) {
    return (a > b) ? a : b;
}
int findHeight(Node* root) {
    if (root == nullptr) {
        return 0;
    }   
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);
    return 1 + customMax(leftHeight, rightHeight);
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(8);
    cout << "Height of the binary tree: " << findHeight(root) << "\n";
    return 0;
}