#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(abs(a - c) <= d || ((abs(b - a) <= d && abs(c - b) <= d)))
    {
        cout << "Yes" << "\n";
    } else 
    {
        cout << "No" << "\n";
    }

    return 0;
}
