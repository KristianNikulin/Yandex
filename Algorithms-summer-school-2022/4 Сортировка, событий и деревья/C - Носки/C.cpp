#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int l, n, m;
    cin >> l >> n >> m;

    vector<int> count(l + 1, 0);
    vector<int> ans(l + 1, 0);

    int left;
    int right;

    for (int i = 0; i < n; i++)
    {
        cin >> left >> right;
        count[left - 1]++;
        count[right]--;
    }

    int q = 0;

    for (int i = 0; i < l; i++)
    {
        q += count[i];
        ans[i] = q;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> q;
        q--;
        cout << ans[q] << '\n';
    }
}
