#include<iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for(int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout << a << ", ";
            continue;
        }
        if(i == 2)
        {
            cout << b << ", ";
            continue;
        }
        c = a + b;
        a = b;
        b = c;
        
        cout << c << ", ";
    }
    return 0;
}