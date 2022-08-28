#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, i, j, dist1, dist2 = 0;
    cin >> n >> i >> j;

    dist1 = max(i, j) - min(i, j) - 1;

    dist2 += min(i, j) - 1;
    dist2 += n - max(i, j);

    cout << min(dist1, dist2);
}
