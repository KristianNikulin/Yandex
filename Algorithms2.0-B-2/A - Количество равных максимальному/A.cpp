#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    vector<int> a;

    cin >> n;
    a.push_back(n);

    while (n)
    {
        cin >> n;
        a.push_back(n);
    }
    sort(a.begin(), a.end());

    int count = 0;
    int max_element = 0;

    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] > max_element)
        {
            max_element = a[i];
            count = 0;
        }
        if (a[i] == max_element)
        {
            count++;
        }
    }
    cout << count;
}
