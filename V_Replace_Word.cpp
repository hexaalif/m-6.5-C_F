#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    // string smple = "EGYPT";
    while (s.find("EGYPT") != -1)
    {
        s.replace(s.find("EGYPT"), 5, " ");
    }
    cout << s;
    return 0;
}