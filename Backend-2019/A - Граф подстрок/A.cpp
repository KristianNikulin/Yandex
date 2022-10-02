#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <set>

using namespace std;

struct wedge
{
    string first, second;
    int w;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    int index_g = 0; // счетчик номера в vector g
    int s1_1;
    int kk;

    vector<int> masdbl(500000, -1);

    cin >> t;

    vector<wedge> g;

    set<string> myset;

    for (int j = 0; j < t; j++)
    {
        string s, s1, v1, v2;
        cin >> s;
        s1_1 = 0;
        kk = s.size();

        for (int k = 0; k < kk - 3; k++)
        {
            s1 = s.substr(s1_1, 4);

            v1 = s1.substr(0, 3);

            // для кол-ва вершин
            if (k == 0)
            {
                myset.insert(v1);
            }
            v2 = s1.substr(1, 3);
            s1_1++;
            myset.insert(v2);

            int index;
            int sum = (int(s1[0]) - 97) + 26 * ((int(s1[1]) - 97) + 26 * ((int(s1[2]) - 97) + 26 * (int(s1[3]) - 97))); // получаем целое значение из 4-х символов в 26-ричной системе с учетом сдвига на 97
            int ind1;
            ind1 = masdbl[sum];

            if (ind1 != -1)
            {
                index = ind1;
                g[index].w++;
            }
            else
            {
                g.push_back({v1, v2, 1});
                masdbl[sum] = index_g;
                index_g++;
            }
        }
    }

    cout << myset.size() << '\n';
    cout << g.size() << '\n';
    for (int i = 0; i < g.size(); i++)
    {
        cout << g[i].first << ' ' << g[i].second << ' ' << g[i].w << '\n';
    }
}
