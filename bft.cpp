/*Implementation of Breadth First Search*/
#include<iostream>

using namespace std;

class bfs {
 public:   struct Node* {
        int data;
        Node* left;
        Node* right;
    }*root;

public:  bfs(){ root = NULL;}

Node* createNode(int x) {
    Node* temp = new Node;
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node* insertNode(Node* root,int x){
    Node* temp = createNode(x);
}




}
