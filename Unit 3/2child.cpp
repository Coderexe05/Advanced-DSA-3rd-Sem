// Program to find count of nodes having 2 children
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
int countNodesWithTwoChildren(Node* root) {
    if (root == nullptr) {
        return 0;
    }  
    int count = 0;
    if (root->left != nullptr && root->right != nullptr) {
        count = 1;
    }
    return count + countNodesWithTwoChildren(root->left) + countNodesWithTwoChildren(root->right);
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    cout << "Count of nodes with 2 children: " << countNodesWithTwoChildren(root) << "\n";
    return 0;
}