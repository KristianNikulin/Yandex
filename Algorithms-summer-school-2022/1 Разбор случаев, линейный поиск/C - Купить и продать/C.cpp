#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    const int CASH = pow(2, 19); // только число 2 в любой степени (из-за вещественного деления)

    int n;
    cin >> n;
    vector<int> price(n);

    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }

    int min_index = 0, max_gas = CASH / price[0], max_profit = 0, ans_i = 0, ans_j = 0;

    for (int i = 1; i < n; i++)
    {
        if (max_gas * price[i] - CASH > max_profit)
        {
            max_profit = max_gas * price[i] - CASH;
            ans_i = min_index + 1;
            ans_j = i + 1;
        }
        if (CASH / price[i] > max_gas)
        {
            min_index = i;
            max_gas = CASH / price[i];
        }
    }
    cout << ans_i << ' ' << ans_j;
}
