#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int land[110][110];
struct robot
{
	int x;
	int y;
	int d;
};
int dx[4] = { 0, 1, 0, -1};
int dy[4] = { 1, 0, -1, 0};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, N, M;
	cin >> A >> B >> N >> M;
	vector<robot> vr;
	memset(land, 0, 110 * 110 * sizeof(int));
	for (int i = 0; i < N; i++)
	{
		int x, y, d;
		char c;
		cin >> x >> y >> c;
		if (c == 'N') d = 0;
		else if (c == 'E') d = 1;
		else if (c == 'S') d = 2;
		else d = 3;
		robot r = { x,y,d };
		vr.push_back(r);
		land[x][y] = i + 1;
	}
	bool isCrashIntoWall = false;
	bool isCrashIntoRobot = false;
	int robotIdx1 = -1;
	int robotIdx2 = -1;
	for (int i = 0; i < M; i++)
	{
		int r, t;
		char o;
		cin >> r >> o >> t;
		if (isCrashIntoRobot || isCrashIntoWall)
			continue;
		robot currentRobot = vr[r - 1];
		int cx, cy, cd;
		cx = currentRobot.x;
		cy = currentRobot.y;
		cd = currentRobot.d;
		if (o == 'L')
		{
			cd -= t;
			cd %= 4;
			if (cd < 0)
				cd += 4;
			vr[r - 1].d = cd;
		}
		else if (o == 'R')
		{
			cd += t;
			cd %= 4;
			if (cd < 0)
				cd += 4;
			vr[r - 1].d = cd;
		}
		else if (o == 'F')
		{
			int difx = dx[cd];
			int dify = dy[cd];
			for (int j = 0; j < t; j++)
			{
				cx += difx;
				cy += dify;
				if (cx < 1 || cx > A || cy < 1 || cy > B)
				{
					isCrashIntoWall = true;
					robotIdx1 = r;
					break;
				}
				if (land[cx][cy] != 0)
				{
					isCrashIntoRobot = true;
					robotIdx1 = r;
					robotIdx2 = land[cx][cy];
					break;
				}
			}
			land[vr[r - 1].x][vr[r - 1].y] = 0;
			vr[r - 1].x = cx;
			vr[r - 1].y = cy;
			land[cx][cy] = r;
		}
	}
	if (isCrashIntoRobot)
	{
		cout << "Robot " << robotIdx1 << " crashes into robot " << robotIdx2 << '\n';
	}
	else if (isCrashIntoWall)
	{
		cout << "Robot " << robotIdx1 << " crashes into the wall\n";
	}
	else
	{
		cout << "OK\n";
	}
	
	return 0;
}
