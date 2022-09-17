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

    a.push_back('/');
    size_t pos, pos2;

    bool f = true;
    while (f)
    {
        pos = a.find("/./");
        if (pos != string::npos)
        {
            while (pos != string::npos)
            {
                a.erase(pos, 2);
                pos = a.find("/./");
            }
        }
        else
        {
            pos = a.find("//");
            if (pos != string::npos)
            {
                while (pos != string::npos)
                {
                    a.erase(pos, 1);
                    pos = a.find("//");
                }
            }
            else
            {
                pos = a.find("/../");
                if (pos != string::npos)
                {
                    while (pos != string::npos)
                    {
                        if (pos == 0)
                        {
                            a.erase(0, 3);
                        }
                        else
                        {
                            string sub = a.substr(0, pos);
                            pos2 = sub.rfind('/');
                            int k = pos - pos2 + 3;
                            a.erase(pos2, k);
                        }
                        pos = a.find("/../");
                    }
                }
                else
                {
                    f = false;
                }
            }
        }
    }

    if (a[a.size() - 1] == '/' && a != "/")
    {
        a.erase(a.size() - 1);
    }
    cout << a;
}
