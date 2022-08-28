#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const int SUP = 1e9; //!

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    const int n = 10; //!

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max_distance = 0;
    int distance1 = 0;
    int distance2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            if (i - 1 != -1)
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    distance1++;
                    if (a[j] == 2)
                    {
                        break;
                    }
                    if (j - 1 == -1)
                    {
                        distance1 = SUP;
                    }
                }
            }
            else
            {
                distance1 = SUP;
            }

            if (i + 1 != n)
            {
                for (int j = i + 1; j < n; j++)
                {
                    distance2++;
                    if (a[j] == 2)
                    {
                        break;
                    }
                    if (j + 1 == n)
                    {
                        distance2 = SUP;
                    }
                }
            }
            else
            {
                distance2 = SUP;
            }

            if (min(distance1, distance2) > max_distance)
            {
                max_distance = min(distance1, distance2);
            }
            distance1 = 0;
            distance2 = 0;
        }
    }
    cout << max_distance;
}
