#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iterator>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    set<int> numbers;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (numbers.contains(a[i])) // C++20
        {
            cout << "YES";
            return 0;
        }
        numbers.insert(a[i]);
        if (i >= k)
        {
            numbers.erase(a[i - k]);
        }
    }
    cout << "NO";
}
