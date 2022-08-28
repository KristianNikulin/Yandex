#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int r, i, c, ans;
    cin >> r >> i >> c;

    ans = i;

    if (i == 6)
    {
        ans = 0;
    }

    if (i == 7)
    {
        ans = 1;
    }

    if (i == 4)
    {
        if (r != 0)
        {
            ans = 3;
        }
        else
        {
            ans = 4;
        }
    }

    if (i == 1)
    {
        ans = c;
    }

    if (i == 0)
    {
        if (r != 0)
        {
            ans = 3;
        }
        else
        {
            ans = c;
        }
    }
    cout << ans;
}
