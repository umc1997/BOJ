#include <iostream>
using namespace std;
typedef long long ll;
ll D[51], M[51];
ll vlcm, vgcd;
ll gcd(ll a, ll b) {
	while (b != 0) {
		ll r = a % b;
		a = b;
		b = r;
	}
	return a;
}

ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int d, m;
	cin >> d >> m;
	for (int i = 0; i < d; i++) cin >> D[i];
	for (int i = 0; i < m; i++) cin >> M[i];

	vgcd = M[0];//최대공약수
	for (int i = 1; i < m; i++) vgcd = gcd(vgcd, M[i]);

	vlcm = 1;//최소공배수
	for (int i = 0; i < d; i++) {
		vlcm = lcm(vlcm, D[i]);
		if (vlcm > vgcd || vlcm == 0) {
			cout << 0;
			return 0;
		}
	}

	ll i, cnt = 0;
	for (i = 1; i*i < vgcd; i++) {
		if (vgcd%i == 0) {
			if (i%vlcm == 0) cnt++;
			if ((vgcd / i) % vlcm == 0) cnt++;
		}
	}
	if (i*i == vgcd && (i%vlcm == 0)) cnt++;
	cout << cnt;
}