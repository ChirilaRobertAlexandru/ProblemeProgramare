#include <iostream>
#include <math.h>
using namespace std;

long long int n, p = 0;

int main()
{
	cin >> n;
	while (n)
	{
		if(n%2)
		cout << pow(2, p) << " ";
		n /= 2;
		p++;
	}
	return 0;
}