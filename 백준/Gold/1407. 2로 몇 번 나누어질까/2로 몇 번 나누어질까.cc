#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

long long g(long long  a, long long b)
{
	if (b == 1)
		return 1;
	vector<long long> va;
	vector<long long> vb; 
	vector<long long> vva;
	vector<long long> vvb;
	a--;
	vva.push_back((a + 1) / 2);
	vvb.push_back((b + 1) / 2);
	while (a >>= 1)	va.push_back(a);
	while (b >>= 1)	vb.push_back(b);
	while (va.size() != vb.size()) va.push_back(0);
	long long result = 0;
	int size = vb.size();
	for (int i = 0; i < size - 1; i++)
	{
		vva.push_back(va[i] - va[i + 1]);
		vvb.push_back(vb[i] - vb[i + 1]);
	}
	vva.push_back(va.back());
	vvb.push_back(vb.back());
	for (int i = 0; i < size + 1; i++)	result += (vvb[i] - vva[i]) << i;
	
	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long A, B;
	long long result = 0;
	cin >> A >> B;
	
	result = g(A, B);
	cout << result << '\n';
	return 0;
}
