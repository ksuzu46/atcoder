#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r;
    cin >> n >> r;

    if(n < 10)
        cout << r + 100 * (10 - n) << "\n";
    else cout << r << "\n";

    return 0;
}
