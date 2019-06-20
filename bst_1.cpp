/* Implementation of binary search tree */
#include<iostream>

using namespace std;

class bst {
public:    struct Node {
        int data;
        Node* left;
        Node* right;
    }*root;

public: bst() {
    root = NULL;
}

Node* createNode(int x) {
    Node* temp = new Node;
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node* insertNode(Node* root,int x) {
    Node* temp = createNode(x);
    if(root == NULL) {
        root = temp;
        return root;
    }
    else if(x <= root->data) {
        root->left = insertNode(root->left,x);
    }
    else if(x > root->data) {
        root->right = insertNode(root->right,x);
    }
    return root;
}

bool searchNode(Node* root,int x) {
    if(root == NULL) return false;
    else if(root->data == x) return true;
    else if(x <= root->data) return searchNode(root->left,x);
    else return searchNode(root->right,x);
}
};

int main()
{
    bst b1;
    b1.root = b1.insertNode(b1.root,10);
    b1.root = b1.insertNode(b1.root,20);
    b1.root = b1.insertNode(b1.root,25);
    b1.root = b1.insertNode(b1.root,15);
    b1.root = b1.insertNode(b1.root,10);
    b1.root = b1.insertNode(b1.root,35);
    cout<<"Enter a number to be searched : ";
    int a;
    cin>>a;
    if(b1.searchNode(b1.root,a) == true) cout<<"Found!!"<<endl;
    else cout<<"Not Found!!!"<<endl;
    return 0;
}

