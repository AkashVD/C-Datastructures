/* Implementation of stack using array */
#include<iostream>
#define MAXSIZE 10

using namespace std;

class stack {
    int a[MAXSIZE];
    int top;

public:
stack() {
    top = -1;
    
}

void push(int x) {
    if(top == MAXSIZE-1) {
        cout<<"Stack Overflow !!!"<<endl;
        return;
    }
   
    a[++top] = x; //top++;
                  //a[top] = x;
}

void pop() {
    if(top == -1) {
        cout<<"Stack Empty !!!"<<endl;
        return;
    }
    top--;

}

int showTop() {
    cout<<"Top : ";
    return a[top];
}

int isempty() {
    cout<<"Is the stack empty : ";
    if(top == -1) return 1;
    else return 0;
}

void print() {
    cout<<"Stack : ";
    for(int i = 0; i <=top; i++)
    {
        cout<<a[i]<<" ";
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
    
    cout<<obj.isempty()<<endl;
    obj.pop();obj.print(); // 10 20 30
    obj.pop();obj.print(); // 10 20

    cout<<obj.showTop()<<endl; //20

    obj.pop();obj.print(); // 10
    obj.pop();obj.print(); //
    cout<<obj.isempty()<<endl;
    obj.pop(); //Stack empty !!!

    return 0;

}