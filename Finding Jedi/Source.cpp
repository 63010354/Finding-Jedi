#include<iostream>
using namespace std;

long long int E[1000001] = { 0 }, totalE = 0;

long long int allE(int);

int main()
{
	int i, n, m;
	int a;
	cin >> n >> m;

	for (i = 0; i < n; i++)
	{
		cin >> a;
		E[a]++;
	}

	allE(m);

	cout << totalE;
}

long long int allE(int m)
{
	int i;
	for (i = 0; i <= 500000; i++)
	{
		if (m - i < i)
			break;

		if (m - i != i)
			totalE = totalE + E[i] * E[m - i];
		else if (m - i >= i)
			totalE = totalE + (E[i] * (E[i] - 1)) / 2;
	}
	return totalE;
}