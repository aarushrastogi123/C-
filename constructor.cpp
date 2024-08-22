#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(void);
    void printData()
    {

        cout << "your output is = " << a << "+" << b << "i" << endl;
    }
};
Complex::Complex(void)
{

    cout << "Enter the real number : ";
    cin >> a;
    cout << "Enter the imaginary number : ";
    cin >> b;
}

int main()
{
    int n;
    cout << "Enter the number of terms : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Complex c;
        c.printData();
    }
    return 0;
}

