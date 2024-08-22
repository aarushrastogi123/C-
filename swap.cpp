#include<iostream>

int main()
{
    int a,b;
    std::cout<<"Enter the numbers="<<std::endl;
    std::cin>>a>>b;
    std::cout<<"Numbers before swapping="<<a<<b<<std::endl;
    a=a+b;
    b=a-b;
    a=a-b;
    std::cout<<"Numbers after swapping="<<a<<b<<std::endl;
    return 0;
}

