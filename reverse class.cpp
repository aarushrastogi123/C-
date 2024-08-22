#include<iostream>
using namespace std;

class Rev
{
    int a, b, c = 0;

public:
    Rev();
    void display();
};

Rev::Rev()
{
    cout << "Enter the number: ";
    cin >> a;
    for (int i = 0; i <= a; i++)
    {
        b = a % 10;
        c = c * 10 + b;
        a /= 10;
    }
}

void Rev ::display()
{
    cout << "The reversed number is: " << c;
}

int main()
{
    Rev reverse;
    reverse.display();
    return 0;
}