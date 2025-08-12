/**
* Author: Hasibul Islam
* Created on: 2025-08-10 18:09
* Short Desc: perform get 2 from one coin pile and 1 from another pile
* IDEA: 2x + y = pile one and x + 2y = pile two
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        double a, b, x, y;
        cin >> a >> b;

        x = ((2.0 * a) - b) / 3.0;
        y = a - (2.0 * x);
        printf("%.2lf\n", (2.0 * x));

        printf("%.2lf %.2lf\n", x, y);
        if ((x - y) <= 0.01)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    
    return 0;
}