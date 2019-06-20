/*Printing the elements in list in given and reverse order using recurrsive function 8*/
#include<iostream>

using namespace std;

class ll {
public:    struct Node {
        int data;
        Node* next;
    };//*head = NULL;

public: Node* head = NULL;
Node* insert(Node* head,int data) {
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

void print(Node* p) {
        
    if(p == NULL)
    {
        cout<<endl;
        return;
    }
    cout<<p->data<<" ";
    print(p->next);
}

void rev_print(Node* p) {
    
    if(p == NULL)
    {
        //cout<<endl;
        return;
    }
    rev_print(p->next);
    cout<<p->data<<" ";
}

};

int main()
{
    ll obj;
    //obj.head = NULL;
    obj.head = obj.insert(obj.head,10);
    obj.head = obj.insert(obj.head,20);
    obj.head = obj.insert(obj.head,30);
    obj.head = obj.insert(obj.head,40);
    
    cout<<"Printing the list in given order : "<<endl;
    obj.print(obj.head);

    cout<<"Printing the list in reverse order : "<<endl;
    obj.rev_print(obj.head);
    cout<<endl;

    return 0;
}