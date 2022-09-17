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

    if (a.size() == 1)
    {
        return 0;
    }

    bool f = false;
    int mid = a.size() / 2;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != 'a')
        {
            if (a.size() % 2 == 1 && mid == i)
            {
                continue;
            }
            a[i] = 'a';
            f = true;
            break;
        }
    }

    if (f)
    {
        cout << a;
    }
    else
    {
        a.erase(a.size() - 1);
        a.push_back('b');
        cout << a;
    }
}
