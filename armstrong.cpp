#include<iostream>
using namespace std;
int main()
{
    int n,a,b=0,c;
    cout<<"enter the number"<<endl;
    cin>>n;
    c=n;
    while(n>0)
    {
        a=n%10;
        b=b+a*a*a;
        n=n/10;
    }
    if(c==b)
    {
        cout<<c<<" = Armstrong number"<<endl;
    }
    else
    {
        cout<<c<<" = Not an Armstrong number"<<endl;
    }
    return 0;
}