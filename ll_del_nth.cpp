/*Deleting of Nodes from nth position*/
#include<iostream>

using namespace std;

class ll{
    struct Node{
        int data;
        Node* next;
    }*head;

    
public: ll(){
        head = NULL;
    }
        void insert(int);
        void display();
        void delete_Node(int);       

};

void ll::insert(int data){
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

void ll::display(){
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void ll::delete_Node(int pos){
    Node* temp = head;
    if(pos == 1)
    {
        head = temp->next;
        delete temp;
        return;
    }
    for(int i = 0; i < pos-2; i++)
    {
        temp = temp->next;
    }

    Node* temp1 = temp->next;
    temp->next = temp1->next;
    delete  temp1;
}

int main()
{
    ll obj;
    int pos;

    obj.insert(10);
    obj.insert(12);
    obj.insert(23);
    obj.insert(37);
    obj.display();
    cout<<"Enter the position of element you want to delete : ";
    cin>>pos;
    obj.delete_Node(pos);
    cout<<endl;
    obj.display();

    return 0;

}