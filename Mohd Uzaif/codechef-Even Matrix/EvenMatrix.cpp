#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n = 0;
    cin >> n;
    int a = 1;
    if (n % 2 != 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a++ << " ";
            }
            cout << "\n";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << a++ << " ";
                }
            }
            else
            {
                a += n - 1;
                for (int j = 0; j < n; j++)
                {
                    cout << a-- << " ";
                }
                a += n + 1;
            }

            cout << "\n";
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}
