#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class BinaryTree {
public:

    void preorder(Node* root) {
        if (root == NULL) return;

        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }

    void inorder(Node* root) {
        if (root == NULL) return;

        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    void postorder(Node* root) {
        if (root == NULL) return;

        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }

    void levelorder(Node* root) {
        if (root == NULL) return;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* temp = q.front();
            q.pop();

            cout << temp->data << " ";

            if (temp->left != NULL)
                q.push(temp->left);

            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
};

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    BinaryTree tree;

    cout << "Preorder: ";
    tree.preorder(root);

    cout << "\nInorder: ";
    tree.inorder(root);

    cout << "\nPostorder: ";
    tree.postorder(root);

    cout << "\nLevel Order: ";
    tree.levelorder(root);

    return 0;
}