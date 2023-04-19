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

char input[2010][2010];
int white[2010][2010];
int black[2010][2010];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, M, K;
	cin >> N >> M >> K;
	for (int i = 1; i <= N; i++) {
		string in;
		cin >> in;
		for (int j = 1; j <= M; j++) {
			input[i][j] = in[j - 1];
		}
	}
	memset(white, 0, sizeof(white));
	memset(black, 0, sizeof(black));
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			bool isBlack = (input[i][j] == 'B') ? true : false;
			bool check = ((i + j) % 2 == 0);
			if (isBlack == check) { 
				black[i][j] = black[i - 1][j] + black[i][j - 1] - black[i - 1][j - 1] + 1;
				white[i][j] = white[i - 1][j] + white[i][j - 1] - white[i - 1][j - 1];
			}
			else {
				black[i][j] = black[i - 1][j] + black[i][j - 1] - black[i - 1][j - 1];
				white[i][j] = white[i - 1][j] + white[i][j - 1] - white[i - 1][j - 1] + 1;
			}
		}
	}
	int result = 2000 * 2000 + 1;
	for (int i = 0; i <= N - K; i++) {
		for (int j = 0; j <= M - K; j++) {
			result = min(result, white[i + K][j + K] - white[i + K][j] - white[i][j + K] + white[i][j]);
			result = min(result, black[i + K][j + K] - black[i + K][j] - black[i][j + K] + black[i][j]);
		}
	}
	cout << result << '\n';
}