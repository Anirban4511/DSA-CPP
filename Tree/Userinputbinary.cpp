#include <iostream>
using namespace std;

// Definition of the binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor to create a new node
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Function to create a node based on user input, with prompts for left and right children
Node* createNode(int parentValue, bool isLeft) {
    int value;

    // Depending on whether the current node is the left or right child, prompt accordingly
    if (isLeft) {
        cout << "Enter the left child of node " << parentValue << " (-1 for no node): ";
    } else {
        cout << "Enter the right child of node " << parentValue << " (-1 for no node): ";
    }

    cin >> value;

    if (value == -1) {
        return nullptr;  // If the input is -1, return NULL (no node)
    }

    // Create the new node with the entered value
    Node* newNode = new Node(value);

    // Recursively create the left and right children
    newNode->left = createNode(newNode->data, true);
    newNode->right = createNode(newNode->data, false);

    return newNode;
}

// Function to traverse the tree (preorder) to verify the structure
void preorder(Node* root) {
    if (root == nullptr)
        return;
    
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    int rootValue;
    cout << "Enter the root node of the binary tree: ";
    cin >> rootValue;

    // Create the root of the tree
    Node* root = new Node(rootValue);

    // Recursively create left and right children of the root
    root->left = createNode(rootValue, true);
    root->right = createNode(rootValue, false);

    // Traverse and print the tree in preorder to verify
    cout << "Preorder traversal of the binary tree: ";
    preorder(root);
    cout << endl;

    return 0;
}
