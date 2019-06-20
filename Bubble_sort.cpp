/* Implementation of Bubble Sort */

#include<iostream>
#define MAXSIZE 100
using namespace std;

void bubbleSort(int a[],int n) {
    for(int i = 0; i < n; i++) { 
        int flag = 0;
        for(int j = 0; j < n-i-1; j++) {
           if(a[j]>a[j+1]) {
               flag =1;
               int temp = a[j];
               a[j] = a[j+1];
               a[j+1] = temp;
        }
    }
}
}

int main() {
    int a[MAXSIZE],n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    bubbleSort(a,n);

    cout<<"Sorted Array"<<endl;
    for(int i=0;i < n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
