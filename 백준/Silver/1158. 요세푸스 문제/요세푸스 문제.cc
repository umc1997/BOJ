#include <iostream>
#include <queue>

using namespace std;


int main()
{
	queue<int> q;
	int N;
	int M;
	cin >> N >> M;
	cout << "<";
	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}
	while (true)
	{
		for (int i = 0; i < M-1; i++)
		{
			int a = q.front();
			q.pop();
			q.push(a);
			
		}
		cout << q.front() ;
		q.pop();
		if (!q.empty())
		{
			cout << ", ";
			continue;
		}
		cout << ">" << endl;
		break;
	}

	return 0;
}
