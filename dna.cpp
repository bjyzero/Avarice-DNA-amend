//该代码为使用贪心的方法
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n; cin >> n;
    string s1, s2; cin >> s1 >> s2;

    //这里把第一个DNA序列变成互补后的样子，后续直接 '==' 即可，不用分情况讨论
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

    //这里从当前位置开始往后搜索满足条件可以互换的序列
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
