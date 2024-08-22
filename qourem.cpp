#include<iostream>
int main()
{
    int a,b,c,d;
    std::cout<<"Enter the two numbers="<<std::endl;
    std::cin>>a>>b;
    c=a/b;
    d=a%b;
    std::cout<<"Qoutient="<<c<<std::endl;
    std::cout<<"Remainder="<<d<<std::endl;
    return 0;
}
