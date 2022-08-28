#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x, y, z;
    cin >> x >> y >> z;

    if (x == y && 1 <= x && x <= 12 && 1 <= y && y <= 12 && 1970 <= z && z <= 2069)
    {
        cout << "1";
        return 0;
    }

    if (13 <= x && x <= 31 && 1 <= y && y <= 12 && 1970 <= z && z <= 2069)
    {
        cout << "1";
        return 0;
    }

    if (13 <= y && y <= 31 && 1 <= x && x <= 12 && 1970 <= z && z <= 2069)
    {
        cout << "1";
        return 0;
    }
    cout << "0";
}
