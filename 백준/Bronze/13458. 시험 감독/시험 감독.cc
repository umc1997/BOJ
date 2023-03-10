#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int arr[1000010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	unsigned int B, C;
	long result = 0;
	cin >> B >> C;
	for (int i = 0; i < N; i++)
	{
		arr[i] -= B;
		result++;
		if (arr[i] > 0)
		{
			result += ceil(((double)arr[i] / C));
		}
	}
	cout << result << "\n";
	return 0;
}
