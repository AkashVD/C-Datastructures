/* Implementation of Insertion sort */
#include <iostream>
#define MAXSIZE 100
using namespace std;

void insertionSort(int a[],int n) {
    for(int i=1; i < n;i ++) {
        int value = a[i];
        int hole = i;
        while(hole > 0 && a[hole-1] > value) {
            a[hole] = a[hole - 1];
            hole--;
        }
        a[hole] = value;
    }
}

int main() {
    int a[MAXSIZE],n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    insertionSort(a,n);

    cout<<"Sorted Array"<<endl;
    for(int i=0;i < n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}