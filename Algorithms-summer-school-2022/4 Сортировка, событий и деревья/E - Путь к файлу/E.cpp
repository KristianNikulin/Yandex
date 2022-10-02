#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string a;
    cin >> a;

    int n;
    cin >> n;

    vector<string> path;

    for (int i = 0; i <= n; i++)
    {
        string directory, file;
        getline(cin, directory);
        file = directory;
        file.erase(remove(file.begin(), file.end(), ' '), file.end());

        int space = 0;
        while (space < directory.size() && directory[space] == ' ')
        {
            space++;
        }

        while (path.size() != space)
        {
            path.pop_back();
        }

        path.push_back(file);

        if (file == a)
        {
            cout << '/';
            for (int i = 0; i < path.size(); i++)
            {
                cout << path[i];
                if (i != path.size() - 1)
                {
                    cout << '/';
                }
            }
            return 0;
        }
    }
}
