#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

bool good(int med, int k, vector<int> a)
{
    int count = 1;
    int prev = a[0];

    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] - prev >= med)
        {
            count++;
            prev = a[i];
        }
    }
    return count >= k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int l = 0;
    int r = a[n - 1];

    while (r > l) // bin search
    {
        int med = (l + r + 1) / 2;

        if (good(med, k, a))
        {
            l = med;
        }
        else
        {
            r = med - 1;
        }
    }
    cout << l;
}
