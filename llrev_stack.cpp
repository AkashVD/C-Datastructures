/* Reversing a Linked list using stack operation */
#include<iostream>
#include<stack>

using namespace std;

class ll {
    struct Node {
        int data;
        Node* next;
    }*head;

public: ll() {
head = NULL;
}

void insert(int);
void display(); 
void reverse();

};

void ll::insert(int data) {
Node* temp = new Node;
temp->data = data;
temp->next = NULL;

if(head == NULL)
{
  temp->next = head;
    head = temp;
    //cout<<"first node"<<endl;
}
else{
    Node* temp1 = head;
    while(temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next=temp;
}
}

void ll::display() {
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void ll::reverse() {
    stack <Node*> S;
    Node* temp = head;
    while(temp != NULL) {
        S.push(temp);
        temp = temp->next;
    }

    temp = S.top();
    head = temp;
    S.pop();
    while(!S.empty()) {
        temp->next = S.top();
        S.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{
    ll obj;
    int pos;

    obj.insert(10);
    obj.insert(12);
    obj.insert(23);
    obj.insert(37);
    cout<<"Before the reversing of List : ";
    obj.display();

    obj.reverse();
    cout<<"After reversal : ";
    obj.display();

    return 0;
}
