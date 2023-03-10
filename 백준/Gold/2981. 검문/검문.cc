#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
unsigned int gcd(unsigned int a, unsigned int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}
unsigned int lcm(unsigned int a, unsigned int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unsigned int N;
	cin >> N;
	unsigned int min = 1000000000;
	vector<unsigned int> v;
	vector<unsigned int> result;
	for (int i = 0; i < N; i++)
	{
		unsigned int tmp;
		cin >> tmp;
		v.push_back(tmp);
		if (tmp < min)
			min = tmp;
	}
	unsigned int d = 0;
	for (int i = 0; i < v.size(); i++)
	{
		d = gcd(d, v[i] - min);
	}
	for (int i = 2; i * i<= d; i++)
	{
		if (d % i == 0)
		{
			result.push_back(i);
			result.push_back(d / i);
		}
	}
	result.push_back(d);
	sort(result.begin(), result.end()); 
	result.erase(unique(result.begin(), result.end()), result.end());
	for (int i = 0; i < result.size(); i++) 
	{
		cout << result[i] << " "; 
	} 
	cout << "\n";
	return 0;
}
