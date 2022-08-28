#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string a;
    cin >> a;

    int j = a.size() - 1;

    int count = 0;

    for (int i = 0; i < a.size() / 2; i++, j--)
    {
        if (a[i] != a[j])
        {
            count++;
        }
    }
    cout << count;
}
