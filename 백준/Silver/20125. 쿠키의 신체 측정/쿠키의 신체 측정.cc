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
using namespace std;

char board[1010][1010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> board[i][j];
		}
	}
	// solution
	int heartX = 0, heartY = 0, leftArm = 0, rightArm = 0, waist = 0, leftLeg = 0, rightLeg = 0;
	for (int i = 2; i < N; i++) {
		for (int j = 2; j < N; j++) {
			if (board[i][j] == '*' && board[i - 1][j] == '*' && board[i][j - 1] == '*' && board[i + 1][j] == '*' && board[i][j + 1] == '*') {
				heartX = i;
				heartY = j;
			}
		}
	}
	for (int i = 1; i <= N; i++) {
		if (board[heartX][i] == '*' && i < heartY) leftArm++;
		else if (board[heartX][i] == '*' && i > heartY) rightArm++;
	}
	for (int i = 1; i <= N; i++) {
		if (board[i][heartY] == '*' && i > heartX) waist++;
	}
	for (int i = heartX + waist + 1; i <= N; i++) {
		if (board[i][heartY - 1] == '*') leftLeg++;
		if (board[i][heartY + 1] == '*') rightLeg++;
	}
	// output
	cout << heartX << " " << heartY << '\n';
	cout << leftArm << " " << rightArm << " " << waist << " " << leftLeg << " " << rightLeg << '\n';
	
	return 0;
}