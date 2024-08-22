#include <iostream>
using namespace std;
class binary
{
    int d, b[50], j;

public:
    binary();
    void display();
};
binary::binary()
{
    cout << "Enter the number: ";
    cin >> d;
    int c= d;
    int i = 0;
    while (d > 0)
    {
        b[i] = d % 2;
        d = d / 2;
        i++;
    }
    cout << "The binary number is: ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << b[j];
    }

    cout << "\n";
    cout << "The decimal number is: "<<c;
}

void binary::display()
{
    cout << "\n";
}

int main()
{
    binary number;
    number.display();
    return 0;
}
