#include <bits/stdc++.h>

using namespace std;

vector<string> users;

string get_availible(string s, int suffix)
{
	int U = users.size();

	string suff = suffix > 0 ? to_string(suffix) : "";

	for (int i = 0; i < U; i++)
	{
		if (users[i] == s + suff)
		{
			return get_availible(s, suffix + 1);
		}
	}

	return s + suff;
}

int main()
{
	string usr;
	int n;

	cin >> usr >> n;

	users.resize(n);

	for (int i = 0; i < n; i++)
		cin >> users[i];

	cout << get_availible(usr, 0);

	return 0;
}