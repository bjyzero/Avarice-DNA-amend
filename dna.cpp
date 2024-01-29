#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < n; ++i)
    {
        if (s1[i] == 'A')
            s1[i] = 'T';
        else if (s1[i] == 'T')
            s1[i] = 'A';
        else if (s1[i] == 'C')
            s1[i] = 'G';
        else
            s1[i] = 'C';
    }

    int ans = 0;
    for (int j = 0; j < n; ++j)
    {
        if (s1[j] == s2[j])
            continue;
        for (int k = j + 1; k < n; ++k)
        {
            if (s1[j] == s2[k] && s1[k] == s2[j])
            {
                swap(s2[j], s2[k]);
                break;
            }
        }
        ans++;
    }
    cout << ans << '\n';
    return 0;
}