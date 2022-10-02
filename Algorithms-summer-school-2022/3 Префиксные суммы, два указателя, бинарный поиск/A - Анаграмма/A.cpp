#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str_1, str_2;
    getline(cin, str_1);
    cin.sync();
    getline(cin, str_2);

    // Первый способ

    set<char> dict;
    vector<int> v(123, 0);

    for (int i = 0; i < str_1.size(); i++)
    {
        v[str_1[i]]++;
    }

    for (int i = 0; i < str_2.size(); i++)
    {
        if (v[str_2[i]] > 0)
        {
            v[str_2[i]]--;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    // Второй способ

    /*
    sort(str_1.begin(), str_1.end());
    sort(str_2.begin(), str_2.end());

    if (str_1 == str_2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    */
}
