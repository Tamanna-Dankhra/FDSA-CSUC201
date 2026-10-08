#include <bits/stdc++.h>
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

Node* insert(Node* root, int value) {
    if (root == NULL)
        return new Node(value);

    Node* temp = root;

    while (true) {
        if (value < temp->data) {
            if (temp->left == NULL) {
                temp->left = new Node(value);
                break;
            }
            temp = temp->left;
        }
        else {
            if (temp->right == NULL) {
                temp->right = new Node(value);
                break;
            }
            temp = temp->right;
        }
    }

    return root;
}

void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = NULL;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        root = insert(root, value);
    }

    cout << "Inorder: ";
    inorder(root);

    return 0;
}