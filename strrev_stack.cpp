/* String reversal using stack operation */
#include<iostream>
#include<stack>
#include<cstring>


#define MAXSIZE 20
using namespace std;

void reverseString(char c[],int n) {
    stack <char> S;
    for(int i = 0; i < n; i++) {
        S.push(c[i]);
    }

    for(int i = 0; i < n; i++) {
        c[i] = S.top();
        S.pop();
    }

}

int main()
{
    char c[MAXSIZE];

    cout<<"Enter a String : ";
    cin.getline(c, MAXSIZE);

    reverseString(c,strlen(c));
    cout<<"Reverse of string : "<<c<<endl;
}