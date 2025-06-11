#include <iostream>
using namespace std;
#include <queue>
struct node
{
    struct node *left = NULL;
    int data;
    struct node *right = NULL;
};

struct node *create(int data)
{
    int leftdata, rightdata;
    if (data == -1)
    {
        return NULL;
    }
    else
    {
        struct node *newnode = new node;
        newnode->data = data;
        cout << "Enter the left child of the node " << data << " - ";
        cin >> leftdata;
        newnode->left = create(leftdata);
        cout << "Enter the right child of the node " << data << " - ";
        cin >> rightdata;
        newnode->right = create(rightdata);
        return newnode;
    }
}

int height(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}

bool isBalanced(node *root)
{
    if(root == NULL)
    {
        return true;
    }
    
    int lh = height(root->left);
    int rh = height(root->right);
    int diff = abs(lh - rh);

    if(diff <= 1 && isBalanced(root->left) && isBalanced(root->right))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int data;
    struct node *root = NULL;
    cout << "Enter the root node of the tree - ";
    cin >> data;
    if (data != -1)
    {
        root = create(data);
        if(isBalanced(root))
        {
            cout<<"The tree is Balanced";
        }
        else
        {
            cout<<"The tree is not balanced";
        }
    }
    else{
        cout<<"The tree is empty";
    }
}