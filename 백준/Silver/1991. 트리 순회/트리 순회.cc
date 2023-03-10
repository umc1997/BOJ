#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

struct Node
{
	char left;
	char right;
};
vector<Node> v(100);
void preOrder(char node) {
	if (node == '.')
		return;
	cout << node;
	preOrder(v[node].left);
	preOrder(v[node].right);
}
void inOrder(char node) {
	if (node == '.')
		return;
	inOrder(v[node].left);
	cout << node;
	inOrder(v[node].right);
}
void postOrder(char node) {
	if (node == '.')
		return;
	postOrder(v[node].left);
	postOrder(v[node].right);
	cout << node;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char d, l, r;
		cin >> d >> l >> r;
		v[d].left = l;
		v[d].right = r;
	}
	preOrder('A');
	cout << "\n";

	inOrder('A');
	cout << "\n";

	postOrder('A');
	cout << "\n";
	return 0;
}
