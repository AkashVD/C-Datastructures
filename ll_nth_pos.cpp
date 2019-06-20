/*Linked list adding the node at nth position*/
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
    void insert(int data,int pos);
    void display();
};

void ll::insert(int data, int pos){
    Node* temp1 = new Node;
    temp1->data = data;
    temp1->next = NULL;
    if(pos == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    else
    {
        Node* temp2 = head;
        
        for(int i = 0; i < pos-2; i++)
        {
            temp2 = temp2->next;
        }
        temp1->next = temp2->next;
        temp2->next = temp1;
    }
}

void ll::display()
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    ll obj;
    
    obj.insert(3,1);
    obj.insert(12,2);
    obj.insert(5,1);
    obj.insert(2,2);
    obj.display();

    return 0;
}