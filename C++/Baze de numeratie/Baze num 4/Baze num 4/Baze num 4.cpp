#include <iostream>
#include <math.h>
using namespace std;

int b, n, x, p = 1, nr = 0;

int main()
{
	cin >> b >> n;
	p = pow(b, n - 1);
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		nr = nr + p * x;
		p /= b;
	}
	cout << nr;

	return 0;
}