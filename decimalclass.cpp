#include <iostream>
using namespace std;
class decimal
{
    int d, b;

public:
    decimaltobinary();
    void display();
};
decimal::decimaltobinary()
{
    int i = 1;
    while (b>0)
    {
        int c = b % 10;
        b=b/10;
        d += c * i;
        i *= 2;
    }
}

void decimal::display()
{
    cout << "Enter the number: ";
    cin >> b;
    cout << "ANSWER: " << d;
}
int main()
{
    decimal dec;
    dec.display();
    return 0;
}