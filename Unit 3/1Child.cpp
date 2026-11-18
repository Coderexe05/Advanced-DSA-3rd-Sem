// Program to find count of nodes having 1 child
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
int countNodesWithOneChild(Node* root) {
    if (root == nullptr) {
        return 0;
    }  
    int count = 0;
    if ((root->left == nullptr && root->right != nullptr) || 
        (root->left != nullptr && root->right == nullptr)) {
        count = 1;
    }
    return count + countNodesWithOneChild(root->left) + countNodesWithOneChild(root->right);
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->left->right = new Node(6);
    cout << "Count of nodes with 1 child: " << countNodesWithOneChild(root) << "\n";
    return 0;
}