/* Implementation of finding min and max number in BST */
#include<iostream>

using namespace std;

class bst {
public:struct Node {
        int data;
        Node* left;
        Node* right;
    }*root;

public: bst() {
    root = NULL;
}    

Node* createNode(int x) {
    Node* temp = new Node;
    temp->data =  x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node* insertNode(Node* root, int x) {
    Node* temp = createNode(x);
    if(root == NULL)
    {
        root = temp;
        return root;
    }
    else if(x <= root->data)
    {
        root->left = insertNode(root->left,x);
    }
    else if(x > root->data)
    {
        root->right = insertNode(root->right,x);
    }
    return root;

}

int lowest(Node* root) {

    if(root == NULL) {
        cout<<"ERROR";
        return -1;
    }
    while(root->left != NULL)
    {
        root = root->left;
    } 
    return root->data;

}

int highest(Node* root) {

    if(root == NULL) {
        cout<<"ERROR";
        return -1;
    }
    while(root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
}
};

int main() {
    bst obj;

    obj.root = obj.insertNode(obj.root,10);
    obj.root = obj.insertNode(obj.root,12);
    obj.root = obj.insertNode(obj.root,34);
    obj.root = obj.insertNode(obj.root,4);
    obj.root = obj.insertNode(obj.root,33);
    obj.root = obj.insertNode(obj.root,2);
    obj.root = obj.insertNode(obj.root,14);
    int low = obj.lowest(obj.root);
    int high = obj.highest(obj.root);
    cout<<"Lowest - "<<low<<endl;
    cout<<"Highest - "<<high<<endl;

    return 0;
}

