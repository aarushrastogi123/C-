#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i == 3 || i == 10)
            continue;
        cout << i << " ";
    }
    return 0;
}
