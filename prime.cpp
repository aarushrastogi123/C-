#include <iostream>

int main()
{
    int a, i, c = 0;
    std::cout << "Enter the number=" << std::endl;
    std::cin >> a;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        std::cout << "Number is prime" << std::endl;
    }
    else
    {
        std::cout << "Number is not prime" << std::endl;
    }
    return 0;
}
