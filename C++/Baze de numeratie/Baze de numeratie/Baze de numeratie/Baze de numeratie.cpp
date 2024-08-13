#include <iostream>
using namespace std;

#define MINIM(a, b) ((a)<(b)?a:b)

int cifUnu(int n)
{
	int x = 0;
	while (n)
	{
		if (n % 2)
			x++;
		n /= 2;
	}
	return x;
}

int main()
{
	int a, b;
	cin >> a >> b;
	if (cifUnu(a) == cifUnu(b))
	{
		cout << MINIM(a, b);
	}
	else
		if (cifUnu(a) > cifUnu(b))
		{
			cout << a;
		}
		else
		{
			cout << b;
		}
}