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

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    long long count = 0;
    int left = 0;
    int right = 0;

    for (int i = 0; i < n; i++)
    {
        while (left < n && a[left] <= 0.5 * a[i] + 7)
        {
            left++;
        }
        while (right < n && a[right] <= a[i])
        {
            right++;
        }
        if (right > left + 1)
        {
            count += right - left - 1;
        }
    }
    cout << count;
}
