/*Implementation of Breadth First Traverse*/
#include<iostream>
#include<queue>

using namespace std;

class bfs {
 public:   struct Node {
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
    if(root == NULL) {
        root = temp;
    }
    else if(x <= root->data) {
        root->left = insertNode(root->left,x);
    }
    else {
        root->right = insertNode(root->right,x);
    }
    return root;

}

void levelTrav(Node* root) {
    if(root == NULL) return;
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty()) {
        Node* current = Q.front();
        cout<<current->data<<" ";
        if(current->left != NULL)  Q.push(current->left);
        if(current->right != NULL) Q.push(current->right);
        Q.pop();  
    }   
}
};

int main() {
    bfs b1;
    b1.root = b1.insertNode(b1.root,10);
    b1.root = b1.insertNode(b1.root,2);
    b1.root = b1.insertNode(b1.root,100);
    b1.root = b1.insertNode(b1.root,12);
    b1.root = b1.insertNode(b1.root,5);
    b1.root = b1.insertNode(b1.root,78);
    b1.root = b1.insertNode(b1.root,18);
    b1.root = b1.insertNode(b1.root,90);
    b1.root = b1.insertNode(b1.root,113);
    b1.root = b1.insertNode(b1.root,293);
    b1.levelTrav(b1.root);
    
}
