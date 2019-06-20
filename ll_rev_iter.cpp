/* Reversing a Linked List using iterative method */
#include<iostream>

using namespace std;

class ll {
public: struct Node {
    int data;
    Node* next;
    }*head;

public: ll() {
    head = NULL;
}    

Node* insert(Node*, int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;

    if(head == NULL) head = temp;
    else {
        Node* temp1 = head;
        while(temp1->next != NULL) {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }

    return head;

}

Node* reverse(Node*) {
    Node *current,*next,*prev;
    current = head;
    prev = NULL;
    
    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    
    return head;

}

void display() {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
};

int main() {
    ll obj;
    obj.head = NULL;
    obj.head = obj.insert(obj.head,1);
    obj.head = obj.insert(obj.head,2);
    obj.head = obj.insert(obj.head,3);
    obj.head = obj.insert(obj.head,4);

    obj.display();
    cout<<"After reversing opertaion !!!"<<endl;
    obj.head = obj.reverse(obj.head);
    obj.display();

    return 0;

}
