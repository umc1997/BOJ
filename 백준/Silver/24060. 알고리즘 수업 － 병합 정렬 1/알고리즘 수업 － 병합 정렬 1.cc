#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>
#include <deque>
#include <set>
#include <unordered_map>
using namespace std;

#define MAX 500000
int arr[MAX + 1];
int tmp[MAX + 1];
int cnt = 0;
int K = 0;
bool flag = false;
void merge(int A[], int p, int q, int r) {
	int i = p, j = q + 1, t = 1;
	while (i <= q && j <= r) {
		if (A[i] <= A[j]) tmp[t++] = A[i++];
		else tmp[t++] = A[j++];
	}
	while (i <= q) { 
		tmp[t++] = A[i++]; 
	}
	while (j <= r) {
		tmp[t++] = A[j++];
	}
	i = p, t = 1;
	while (i <= r) {
		cnt++;
		if (cnt == K) {
			cout << tmp[t] << '\n';
			flag = true;
			return;
		}
		A[i++] = tmp[t++];
	}
}
void merge_sort(int A[], int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		merge_sort(A, p, q);
		merge_sort(A, q + 1, r);
		merge(A, p, q, r);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	int N;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) cin >> arr[i];
	merge_sort(arr, 1, N);
	// output
	if (!flag) cout << "-1\n";

	return 0;
}