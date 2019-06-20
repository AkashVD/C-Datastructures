/* Implementstion of Merge Sort */
#include<iostream>
#include<cstdlib>
using namespace std;

void merge(int *LeftArray, int *RightArray, int *Array) {
    int ln = sizeof(LeftArray)/sizeof(LeftArray[0]);
    int rn = sizeof(RightArray)/sizeof(RightArray[0]);
    int i = 0, j = 0, k = 0; 
    while(i<ln && j<rn) {
        if(LeftArray[i] <= RightArray[j]) {
            Array[k] = LeftArray[i];
            i++;
        }
        else {
            Array[k] = RightArray[j];
            j++;
        }
        k++;
    }
}

void mergeSort(int *Array) {
    int n = sizeof(Array)/sizeof(Array[0]);
    
    if(n<2) return;
    
    int mid = n/2;
    int *left = (int*)malloc(mid*sizeof(int)); 
	int *right = (int*)malloc((n- mid)*sizeof(int)); 
    for(int i = 0; i < mid; i++)
    {
        left[i] = Array[i];
    }

    for(int i = mid; i < n; i++)
    {
        right[i-mid] = Array[i];
    }

    mergeSort(left);
    mergeSort(right);
    merge(left, right, Array);
  
}

int main() {
    int Array[] = {10,18,99,2,23,3,4,5};
    int n = sizeof(Array)/sizeof(Array[0]);
    mergeSort(Array);

    cout<<"Sorted Array"<<endl;
    for(int i=0;i < n;i++)
    {
        cout<<Array[i]<<" ";
    }
    cout<<endl;
    
    return 0;

}
