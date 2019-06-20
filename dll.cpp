/* Implementation of doubly linked list */
#include<iostream>

using namespace std;

class dll {
    struct Node {
        int data;
        Node* next;
        Node* prev;
    };

public: Node* head = NULL;

Node* getnewNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;

    return temp;
}

Node* insertAtHead(Node* head,int data) {
    Node* newNode = getnewNode(data);
    if(head == NULL) head = newNode;
    else {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
    return head;
}

Node* insertAtTail(Node* head,int data) {
    Node* newNode = getnewNode(data);
    if(head == NULL) head = newNode;
    else {
        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        newNode->prev = temp;
        temp->next = newNode;
    }
    return head;
}

void print_given() {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void reverse_print() {
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    head = temp;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;

}

};

int main()
{
    dll obj;
    //obj.head = NULL;

    obj.head = obj.insertAtHead(obj.head,10); // 10
    obj.head = obj.insertAtHead(obj.head,20); // 20 10
    obj.head = obj.insertAtHead(obj.head,30); // 30 20 10
    obj.head = obj.insertAtTail(obj.head,50);  // 30 20 10 50
    obj.head = obj.insertAtTail(obj.head,60);  // 30 20 10 50 60
    obj.print_given();
    cout<<"Printing in reverse order "<<endl;
    obj.reverse_print();

    return 0;
}
