#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <iterator>
#include <fstream>
#include <complex>
#include <queue>
#include <deque>
#include <stack>
#include <set>

using namespace std;

const int DICT_WORD_SIZE = 100;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s, w;

    set<string> dict;
    vector<string> words;
    vector<string> answer;

    // slovar
    getline(cin, s);
    stringstream s_s(s);
    while (s_s >> s)
    {
        dict.insert(s);
    }

    cin.sync();

    // words
    getline(cin, w);
    stringstream s_w(w);
    while (s_w >> w)
    {
        words.push_back(w);
    }

    for (int i = 0; i < words.size(); i++)
    {
        int w_size = words[i].size();
        int minn = min(DICT_WORD_SIZE, w_size);

        for (int j = 1; j <= minn; j++)
        {
            string z = words[i].substr(0, j);
            if (dict.contains(z)) // C++20
            {
                answer.push_back(z);
                break;
            }
            if (j == words[i].size())
            {
                answer.push_back(words[i]);
            }
        }
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << ' ';
    }
}
