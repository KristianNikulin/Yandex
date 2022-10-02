#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> group(n);
    for (int i = 0; i < n; i++)
    {
        cin >> group[i];
    }
    sort(group.begin(), group.end());

    int m;
    cin >> m;
    vector<int> room(m);
    for (int i = 0; i < m; i++)
    {
        cin >> room[i];
    }
    sort(room.begin(), room.end());

    int count = 0;
    int index = 0;
    for (int i = 0; i < group.size(); i++)
    {
        while (index < room.size() && room[index] < group[i])
        {
            index++;
        }
        if (index != room.size())
        {
            count++;
            index++;
        }
    }
    cout << count;
}
