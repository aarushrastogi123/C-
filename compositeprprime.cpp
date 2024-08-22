#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number : ";
    cin >> a;
    bool flag = true;
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
        cout << a << " = Prime";
    else
        cout << a << " = Composite";
    return 0;
}
