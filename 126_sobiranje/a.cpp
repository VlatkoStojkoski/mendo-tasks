#include <iostream>

using namespace std;

int sobiranje(int a, int b)
{
	int rez = 0, zbir = 0;

	while (a > 0 || b > 0)
	{
		if (((a % 10) + (b % 10) + zbir) >= 10)
		{
			rez++;

			zbir = 1;
		}
		else
		{
			zbir = 0;
		}

		a = a / 10;
		b = b / 10;
	}

	return rez;
}

int main()
{
	int a, b;

	cin >> a >> b;

	cout << sobiranje(a, b);

	return 0;
}
