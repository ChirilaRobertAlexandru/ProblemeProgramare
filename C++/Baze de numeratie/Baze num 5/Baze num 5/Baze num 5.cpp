#include <iostream>
#include <fstream>
using namespace std;

ifstream f("conversie_b_10.in");
ofstream g("conversie_b_10.out");

int n, b, nr = 0, p = 1;

int main()
{
	f >> n >> b;
	while (n)
	{
		nr = nr + n % 10 * p;
		p *= b;
		n /= 10;
	}
	g << nr;
	return 0;
}