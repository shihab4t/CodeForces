#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num <= 2)
        cout << "NO\n";
    else
    {
        if (num % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
