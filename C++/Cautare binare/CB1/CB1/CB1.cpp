/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int cautareBinar(int )

int main()
{
    int n, scor[1001], poz[1001], cnt = 1, x, r;
    cin >> n;
    cin >> scor[1];
    poz[1] = cnt++;
    for (int i = 2; i <= n; i++)
    {
        cin >> scor[i];
        if (scor[i] > scor[i - 1])
            poz[i] = cnt++;
        else
            poz[i] = cnt;
    }
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        cin >> x;
        cout << cautareBinara(x);

    }

    return 0;
}