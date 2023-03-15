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
#include <regex>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
	// input & assignment
    int T;
    cin>>T;
	while (T--) {
        string s;
        cin >> s;
        if (regex_match(s,regex("(100+1+|01)+"))) cout <<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}