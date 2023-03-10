#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>
#include <deque>

using namespace std;
#define MAX 100000
int visited[MAX + 1];
deque<int> Q = {};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// input & assignment
	int N, K;
	cin >> N >> K;
	int result = 0;
	// solution
	if (N >= K) {
		cout << N - K << endl;
		return 0;
	}
	Q.push_front(N);
	while (!Q.empty()) {
		int front = Q.front(); 
		if (front == K) {
			result = visited[front];
			break;
		}
		Q.pop_front();
		int arr[3] = { front + 1 , front - 1, front * 2 };
		for (int i = 0; i < 3; i++)
		{
			int num = arr[i];
			if (num > MAX || num < 0) continue;
			if (visited[num] == 0) {
				if (num == front * 2 && num != 0) {
					visited[num] = visited[front];
					Q.push_front(num);
				}
				else {
					visited[num] = visited[front] + 1;
					Q.push_back(num);
				}
			}				
		}		
	}
	// output
	cout << result << endl;
	
	return 0;
}