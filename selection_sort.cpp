/* Implementation of Selection sort- Ascending order */
#include<iostream>
#define MAXSIZE 1000
using namespace std;

void selectionSort(int a[],int n)
{
    for(int i = 0; i < n-1; i++) {
        int iMin = i;
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[iMin]) {
                iMin = j;
            }
            int temp = a[i];
            a[i] = a[iMin];
            a[iMin] = temp;
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

    selectionSort(a,n);

    cout<<"Sorted Array"<<endl;
    for(int i=0;i < n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    

}