#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;
	long long sum = 0;
	for (int i = n; i > 0; i--)
	{
		sum += i;
		sum += (n - i) * (i - 1);
	}
	cout << sum;
}