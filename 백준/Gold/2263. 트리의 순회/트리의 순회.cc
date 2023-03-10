
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int in[100010];
int post[100010];
int position[100010];

void pre(int in_start, int in_end, int post_start, int post_end)
{
	if (in_start > in_end || post_start > post_end) return;
	int root = post[post_end];
	cout << root << ' ';
	int k = position[root];
	pre(in_start, k, post_start, post_start + k - in_start - 1);
	pre(k + 1, in_end, post_start + k - in_start, post_end - 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> in[i];
	for (int i = 0; i < N; i++)
		cin >> post[i];
	for (int i = 0; i < N; i++)
		position[in[i]] = i;

	pre(0, N - 1, 0, N - 1);

	return 0;
}
