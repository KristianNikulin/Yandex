#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n + 1);
    a[0] = 0;

    for (int i = 1; i < a.size(); i++)
    {
        cin >> a[i];
    }

    vector<int> col(a.size());
    col[0] = 0;
    for (int i = 1; i < col.size(); i++)
    {
        if (a[i] > 0)
        {
            col[i] = col[i - 1];
            col[i]++;
        }
        else
        {
            col[i] = col[i - 1];
        }
    }

    int q, count;
    cin >> q;
    for (int k = 0; k < q; k++)
    {
        int l, r;
        cin >> l >> r;

        count = col[r] - col[l - 1];

        cout << count << '\n';
    }
}
