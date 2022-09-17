#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);

    string q;
    int min1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> q;

        min1 += q[0] * 10;
        min1 += q[1];
        min1 *= 60;
        min1 += q[3] * 10;
        min1 += q[4];

        a[i] = min1;
        min1 = 0;
    }
    sort(a.begin(), a.end());

    int min_time = (24 * 60) + a[0] - a[a.size() - 1];

    for (int i = 1; i < n; i++)
    {
        min_time = min(min_time, a[i] - a[i - 1]);
    }
    cout << min_time;
}
