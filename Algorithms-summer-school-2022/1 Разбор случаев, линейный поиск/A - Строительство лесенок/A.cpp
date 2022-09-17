#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, steps = 0, summ = 0, count = 1;
    cin >> n;

    while (n > summ)
    {
        summ += count;
        if (n < summ)
        {
            break;
        }
        steps++;
        count++;
    }
    cout << steps;
}
