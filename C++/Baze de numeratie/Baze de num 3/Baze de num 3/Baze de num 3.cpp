#include <iostream>
using namespace std;

int cifMin(int n)
{
	int x=0;
	while (n)
	{
		if (n % 10 > x)
		{
			x = n % 10;
		}
		n /= 10;
	}
	return x;
}

int main()
{
	int n, b = 0, x;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		if (cifMin(x) > b)
		{
			b = cifMin(x);
		}
	}
	cout << b+1;
	return 0;
}