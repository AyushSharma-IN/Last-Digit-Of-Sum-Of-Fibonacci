#include <iostream>
#include <vector>
using namespace std;

vector<unsigned long long int> Fib(unsigned long long& n)
{
	vector<unsigned long long int> f(n);
	unsigned long long i;

	f[0] = 0; f[1] = 1;

	for (i = 2; i < n; i++)
	{
		f[i] = (f[i - 1] + f[i - 2]) % 10;
	}

	return f;
}

int main()
{
	unsigned long long n, sum = 0;
	cin >> n;
	++n;
	n %= 60;
	vector<unsigned long long int> f(n);
	f = Fib(n);
	for (auto i : f)
	{
		sum = (sum + i) % 10;
	}
	cout << sum << endl;
	return 0;
}