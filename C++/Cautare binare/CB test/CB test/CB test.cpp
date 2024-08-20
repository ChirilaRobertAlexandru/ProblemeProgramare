#include <iostream>
using namespace std;

int main()
{
    int v[100], n, i,x;
    cin >> n;
    for (i = 1; i <= n; i++)
        v[i] = i;
    cin >> x;
    int st, dr, m, poz;
    st = 1, dr = n, poz = 0;
    while (st <= dr && poz == 0)
    {
        m = (st + dr) / 2;
        if (v[m] == x)
            poz = m;
        else
            if (x < v[m])
            {
                dr = m - 1;
            }
            else
            {
                st = m + 1;
            }
    }
    cout << poz;
}

