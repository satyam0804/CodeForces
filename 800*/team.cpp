#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    int a, b, c;
    int sum = 0;
    int count = 0;
    while (n--)
    {
        cin >> a >> b >> c;
        if (a == 1 || a == 0 && b == 1 || b == 0 && c == 1 || c == 0)
        {
            sum = a + b + c;
            if (sum >= 2)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}