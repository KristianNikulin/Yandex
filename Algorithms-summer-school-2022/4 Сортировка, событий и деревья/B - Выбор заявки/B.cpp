#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

struct lecture
{
    int begin;
    int end;
};

bool cmp(lecture a, lecture b)
{
    if (a.end != b.end)
    {
        return a.end < b.end;
    }
    else
    {
        return 0;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<lecture> a;

    for (int i = 0; i < n; i++)
    {
        int q, w;
        cin >> q >> w;
        a.push_back({q, w});
    }
    sort(a.begin(), a.end(), cmp);

    int count = 1;
    int t = a[0].end;

    for (int i = 1; i < a.size(); i++)
    {
        if (a[i].begin >= t)
        {
            count++;
            t = a[i].end;
        }
    }
    cout << count;
}
