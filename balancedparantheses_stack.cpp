/* Implementation of balancing of parantheses uisng stack operation */
#include<iostream>
#include<stack>
#include<cstring>
#define MAXSIZE 50

using namespace std;

/*bool MatchTop(char top,char c) {
    if((top == '(' && c == ')') || (top == '{' && c == '}') || (top == '[' && c == ']'))
    {
        return true;
    }
    else
    {
        return false;
    }
    
}*/
bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}


void balancedPar(char *c) {
    stack <char> S;
    int n = strlen(c);

    for(int i = 0; i < n; i++) {
        if(c[i] == '(' || c[i] == '{' || c[i] ==  '[') 
        {
            S.push(c[i]);
        }
        else if( c[i] == (')' || c[i] == '}' || c[i] == ']')) 
        {
            if(S.empty() || !ArePair(S.top(),c[i])) return;
            else {
                S.pop();
            }
        }          
    }

    if(S.empty()) 
    {
        cout<<"Parantheses of expression are balanced!!!"<<endl;
    } 
    else
    {
        cout<<"Parantheses of expression are not balanced!!!"<<endl;
    }
    
    
}


int main()
{
    char c[MAXSIZE];

    cout<<"Enter the expression for ";
    cin.getline(c,MAXSIZE);

    cout<<"Checking for balancing of parantheses..."<<endl;
    balancedPar(c);
    
    return 0;

}