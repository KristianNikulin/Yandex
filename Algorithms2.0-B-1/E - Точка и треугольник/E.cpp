#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int d, x, y;
    cin >> d >> x >> y;

    // (x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0)
    // (x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0)
    // (x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0)

    int q = (0 - x) * (0 - 0) - (d - 0) * (0 - y);
    int w = (d - x) * (d - 0) - (0 - d) * (0 - y);
    int e = (0 - x) * (0 - d) - (0 - 0) * (d - y);

    if ((q > 0 || q == 0) && (w > 0 || w == 0) && (e > 0 || e == 0))
    {
        cout << "0";
        return 0;
    }
    else
    {
        if (x < 0 && y < 0)
        {
            cout << "1";
        }

        if (x < 0 && y > 0)
        {
            if (y <= abs(y - d))
            {
                cout << "1";
            }
            else
            {
                cout << "3";
            }
        }

        if (x > 0 && y < 0)
        {
            if (x <= abs(x - d))
            {
                cout << "1";
            }
            else
            {
                cout << "2";
            }
        }

        if (x > 0 && y > 0)
        {
            if (x >= y)
            {
                cout << "2";
            }
            else
            {
                cout << "3";
            }
        }
    }
}
