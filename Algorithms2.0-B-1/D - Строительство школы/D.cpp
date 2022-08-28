#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    vector<long long> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll med1 = floor((n - 1) / 2);
    ll med2 = ceil((n - 1) / 2);
    ll mediana = (a[med1] + a[med2]) / 2;

    cout << mediana;
}
