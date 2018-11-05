#include <iostream>

using namespace std;

int Ank(int n, int k);

int main()
{
	int n, k, i;
	cout << "input n, k(k<=n):" << endl;
	cin >> n >> k;
	for (i = 0; i <= (k-1); i++)
	{
		cout << (Ank(n, i) / Ank(i, i)) << endl;
	}

	system("pause");
	return 0;
}


int Ank(int n, int k)
{
	int acc = 1;
	for (int i = 1; i <= k; i++)
	{
		acc = n * acc;
		n--;
	}
	return acc;
}