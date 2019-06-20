/* Using recursive function to reverse the list */
#include<iostream>

using namespace std;

class ll {
    struct Node {
        int data;
        Node* next;
    };

public: Node* head = NULL;

Node* insert(Node*,int data) {
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

void reverse(Node* p) {
    if(p->next == NULL)
    {
        head = p;
        return;
    }

    reverse(p->next);

    Node* q = p->next;
    q->next = p;
    p->next = NULL;

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

int main()
{
    ll obj;
    obj.head = obj.insert(obj.head,10);
    obj.head = obj.insert(obj.head,20);
    obj.head = obj.insert(obj.head,30);
    obj.head = obj.insert(obj.head,40);
    obj.head = obj.insert(obj.head,50);

    obj.display();

    obj.reverse(obj.head);

    obj.display();

    return  0;

}