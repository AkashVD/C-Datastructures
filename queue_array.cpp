/* Implementation of queue using linear array */
#include<iostream>
#define MAXSIZE 20

using namespace std;

class queue {
    int a[MAXSIZE],front,rear;

public: queue() {
    front = -1;
    rear = -1;
}
void enqueue(int);
void dequeue();

int frontEle()
{
    return a[front];

}

bool isEmpty()
{
    if(front == -1 && rear == -1)
    return true;
    else
    return false;   
}

bool isFull()
{
    if(rear == (MAXSIZE-1))
    return true;
    else
    return false;
}
 
};

void queue::enqueue(int data) {
    if (isFull()) {
        cout<<"Array is full!!! You have reached maximum limit"<<endl;
        return;
    }

    else if (isEmpty()) {
        front = 0;
        rear = 0;     
    } 

    else {
        rear++;
    }

a[rear] = data;
}

void queue::dequeue() {
    if(front = rear) {
        front = -1;
        rear = -1;
    }

    else if(isEmpty()) {
        cout<<"The queue is empty!!!"<<endl;
        return;
    }

    else {
        cout<<"TEST";
        front = front + 1;
        cout<<a[front];
    }
}



int main()
{
    queue q;
   //q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout<<q.frontEle()<<endl;
    //cout<<q.isEmpty()<<endl;
    //cout<<q.isFull()<<endl;
    q.dequeue();
    //cout<<q.frontEle()<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}