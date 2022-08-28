#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int l, k;
    cin >> l >> k;

    vector<int> a(k);

    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }

    vector<int>::iterator it1;
    vector<int>::iterator it2;

    int index = l / 2;

    if (l % 2 == 1)
    {
        it1 = find(a.begin(), a.end(), index);
        if (it1 != a.end())
        {
            cout << index;
            return 0;
        }
        else
        {
            it2 = upper_bound(a.begin(), a.end(), index);
            it1 = prev(it2, 1);

            cout << *it1 << ' ' << *it2;
            return 0;
        }
    }
    else
    {
        it1 = find(a.begin(), a.end(), index);
        if (it1 != a.end())
        {
            it2 = prev(it1, 1);
            cout << *it2 << ' ' << index;
            return 0;
        }
        else
        {
            it2 = upper_bound(a.begin(), a.end(), index);
            it1 = prev(it2, 1);

            cout << *it1 << ' ' << *it2;
            return 0;
        }
    }
}
