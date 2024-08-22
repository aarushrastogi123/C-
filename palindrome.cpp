#include <iostream>

using namespace std;

int main()
{
    int a, d;
    cout << "Enter the number=";
    cin >> a;
    int c = a;
    int b = 0;
    while (a > 0)
    {
        d = a % 10;
        b = (b * 10) + d;
        a = a / 10;
    }
    if (c == b)
    {
        cout << c << " is a Palindrome Number" << endl;
    }
    else
    {
        cout << c << " is not a Palindrome Number" << endl;
    }
}
