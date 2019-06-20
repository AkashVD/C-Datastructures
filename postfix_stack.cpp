/* Evaluation of postfix expression using stack */
#include <iostream>
#include <stack>
#include <cstring>
#define MAXSIZE 50
using namespace std;

int evaluatePostfix(char c[]) {
    int n = strlen(c);
    stack<int> S;
    for(int i = 0; i < n; i++) {
        if(c[i] == '0') {

        }
        else if(c[i] == '+'|| c[i] == '-' || c[i] == '*' || c[i] == '/' ) {
            int op2 = S.pop();
            int op1 = S.pop();

        }
        else {
            cout<<"Incorrect input!!!"
        }
    }
}

int main() {
    char c[50];

    cout<<"Enter an expresssion in postfix notation : ";
    cin.getline(c,MAXSIZE);

    cout<<"Ouutput of expression is : "<<evaluatePostfix(c);
    return 0;

}

