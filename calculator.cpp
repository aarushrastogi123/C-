#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the First Number : ";
    cin>>a;
    char c;
    cout<<"Enter the operator : ";
    cin>>c;
    cout<<"Enter the Second Number : ";
    cin>>b;
    switch (c)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
    default :
        cout<<"Invalid operator"<<endl;
    }    
}