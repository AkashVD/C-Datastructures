/* Implementation of stack using linked list */
#include<iostream>

using namespace std;

class stack {
    struct Node {
        int data;
        Node* next;
    }*top;

public: 

stack() {
    top = NULL;
}

void push(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if(top == NULL) top =temp;
    else {
        temp->next = top;
        top = temp;
    }

}

void pop() {
    Node* temp = top;
    if(top == NULL) {
        cout<<"Error: Stack is Empty!!!"<<endl;
        return;
    }
    top = temp->next;
    
    delete temp;
}

int showTop() {
    cout<<"Top Of Stack is : ";
    return top->data;
}

bool isEmpty() {
    cout<<"Is stack empty?? ";
    if(top == NULL) return true;
    else return false;
}

void print() {
    Node* temp = top;
    cout<<"Stack :";
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

};

int main()
{
    stack obj;
    obj.push(10);obj.print(); // 10
    obj.push(20);obj.print(); // 10 20 
    obj.push(30);obj.print(); // 10 20 30
    obj.push(40);obj.print(); // 10 20 30 40
     
    cout<<obj.showTop()<<endl; //40
    
    cout<<obj.isEmpty()<<endl;;
    obj.pop();obj.print(); // 10 20 30
    obj.pop();obj.print(); // 10 20

    cout<<obj.showTop()<<endl; //20

    obj.pop();obj.print(); // 10
    obj.pop();obj.print(); //
    cout<<obj.isEmpty()<<endl;
    obj.pop(); 

    return 0;
}