/* Exceptional handling*/
#include<iostream>

using namespace std;

int fact(int n)
{
    if(n == 0) return 1;
    return n*fact(n-1);
}

int main()
{
    int n;
    cout<<"Enter : ";
    cin>>n;

    try
    {
        if(n<0)
        throw(n);

        if(n>=20)
        throw("Too Large to compute");

        int f = fact(n);
        cout<<f<<endl;
    }
    catch(int e)
    {
        cerr<<"n cannot be negative number"<<endl;
    }
    catch(const char *s)
    {
        cerr<<s<<endl;
    }
    
}