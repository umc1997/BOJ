#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	while (getline(cin,s))
	{
		int alpha = 0;
		int ALPHA = 0;
		int number = 0;
		int blank = 0;
		int size = s.size();
		for (int i = 0; i < size; i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
				number++;
			else if (s[i] >= 'a' && s[i] <= 'z')
				alpha++;
			else if (s[i] >= 'A' && s[i] <= 'Z')
				ALPHA++;
			else if (s[i] == ' ')
				blank++;
		}
		cout << alpha << " " << ALPHA << " " << number << " " << blank << "\n";
	}

	return 0;
}