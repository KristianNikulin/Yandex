#include <iostream>
#include <algorithm>
#include <cmath>
#include <iterator>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, k, q;

    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> q;
        a.insert(q);
    }

    cin >> m;
    set<int> b;
    for (int i = 0; i < m; i++)
    {
        cin >> q;
        b.insert(q);
    }

    cin >> k;
    set<int> c;
    for (int i = 0; i < k; i++)
    {
        cin >> q;
        c.insert(q);
    }

    set<int>::iterator it;

    set<int> ans;
    // пересечение сетов a и b --> ans
    set_intersection(a.begin(), a.end(), b.begin(), b.end(),
                     inserter(ans, ans.begin()));

    set<int> z;
    // обьединение сетов a и b --> z
    for (it = a.begin(); it != a.end(); ++it)
        z.insert(*it);
    for (it = b.begin(); it != b.end(); ++it)
        z.insert(*it);

    set<int> x;
    // пересечение сетов z и с --> x
    set_intersection(z.begin(), z.end(), c.begin(), c.end(),
                     inserter(x, x.begin()));

    // обьединение сетов ans и x
    for (it = x.begin(); it != x.end(); ++it)
        ans.insert(*it);

    for (int x : ans)
    {
        cout << x << ' ';
    }
}
