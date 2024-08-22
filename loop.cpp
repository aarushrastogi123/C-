#include <iostream>
using namespace std;
int main()
{
    cout<<"AP->"<<endl;
    int i, a, n, d;
    cout << "Enter the number of terms = ";
    cin >> n;
    cout << "Enter the first term = ";
    cin >> a;
    cout << "Enter the common difference = ";
    cin >> d;
    cout << "AP = ";
    for (i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a + d;
    }
    cout << "HP = ";
    for (i = 1; i <= n; i++)
    {
        cout << 1 / a << "";
    }

    int j, b, r, x;
    cout << "\n Enter the number of terms = ";
    cin >> x;
    cout << "Enter the first term = ";
    cin >> b;
    cout << "Enter the common ratio = ";
    cin >> r;
    cout << "GP = ";
    for (j = 1; j <= x; j++)
    {
        cout << b << " ";
        b = b * r;
    }
    return 0;
}
