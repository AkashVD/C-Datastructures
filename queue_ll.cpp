/* Implementation of queue using linked list */
#include<iostream>

using namespace std;

class queue {
    struct Node {
        int data;
        Node* next;
    }*front,*rear;

public: queue() {
    front = NULL;
    rear = NULL;
}    
Node* createNode(int x) {
    Node* temp = new Node;
    temp->data = x;
    temp->next = NULL;
}

void enqueue(int x) {
    Node* temp = createNode(x);
    if(front == NULL && rear == NULL) {
        front = temp;
        rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void dequeue() {
    Node* temp = front;
    if(front == rear) {
        front = NULL;
        rear = NULL;
        delete temp;
        return;
    }
    front = temp->next;
    delete temp;
}

void display() {
    Node* temp = front;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

};

int main() {
    queue q1;
    q1.enqueue(10); q1.display(); 
    q1.enqueue(20); q1.display();
    q1.enqueue(30); q1.display();
    q1.enqueue(40); q1.display();
    q1.dequeue(); q1.display();
    q1.dequeue(); q1.display();
    q1.dequeue(); q1.display();
    q1.dequeue(); q1.display();
    q1.dequeue(); q1.display();
    return 0;
}