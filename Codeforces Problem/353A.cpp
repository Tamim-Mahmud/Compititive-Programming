#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int suma = 0, sumb = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        suma += a;
        sumb += b;
    }
    if (suma % 2 == 0 && sumb % 2 == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    if (suma % 2 == 0 || sumb % 2 == 0 && suma != sumb)
    {
        cout << 1 << endl;
        return 0;
    }
    else
        cout << -1 << endl;

    return 0;
}