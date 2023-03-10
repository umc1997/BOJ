#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

struct Point
{
	int x, y;
};
class Line {
public:
	Point p1, p2;
	
};
Line lineIdx[3010];
int parents[3010];
int roots[3010];
int groups[3010];
int ccw(Point p1, Point p2, Point p3) {
    int cross_product = (p2.x - p1.x) * (p3.y - p1.y) - (p3.x - p1.x) * (p2.y - p1.y);
    if (cross_product > 0) {
        return 1;
    }
    else if (cross_product < 0) {
        return -1;
    }
    else {
        return 0;
    }
}
bool comparator(Point left, Point right) {
    int ret;
    if (left.x == right.x) {
        ret = (left.y <= right.y);
    }
    else {
        ret = (left.x <= right.x);
    }
    return ret;
}
void swap(Point* p1, Point* p2) {
    Point temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int LineIntersection(Line l1, Line l2) {
    int ret;
    int l1_l2 = ccw(l1.p1, l1.p2, l2.p1) * ccw(l1.p1, l1.p2, l2.p2);
    int l2_l1 = ccw(l2.p1, l2.p2, l1.p1) * ccw(l2.p1, l2.p2, l1.p2);
    if (l1_l2 == 0 && l2_l1 == 0) {
        if (comparator(l1.p2, l1.p1)) swap(&l1.p1, &l1.p2);
        if (comparator(l2.p2, l2.p1)) swap(&l2.p1, &l2.p2);
        ret = (comparator(l2.p1, l1.p2)) && (comparator(l1.p1, l2.p2));
    }
    else {
        ret = (l1_l2 <= 0) && (l2_l1 <= 0);
    }
    return ret;
}
int find_root(int x) {
    if (x == parents[x]) return x;
    return parents[x] = find_root(parents[x]);
}
void union_root(int x, int y) {
    x = find_root(x);
    y = find_root(y);
    if (x != y) {
        parents[x] = y;
    }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        Point p1 = { x1, y1 };
        Point p2 = { x2, y2 };
        Line l = { p1, p2 };
        lineIdx[i] = l;
    }
    for (int i = 0; i < N; i++)
    {
        parents[i] = i;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (LineIntersection(lineIdx[i], lineIdx[j])) union_root(i, j);
        }
    }
    int group = 0;
    for (int i = 0; i < N; i++)
    {
        roots[i] = find_root(i);
        if (roots[i] == i) { 
            group++; 
        }
        groups[roots[i]] ++;
    }
    sort(groups, groups + N, greater<int>());
    cout << group << '\n' << groups[0] << '\n';
	return 0;

}