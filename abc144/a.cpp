#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if(a < 10 && b < 10)
        cout << a * b << "\n";
    else cout << -1 << "\n";

    return 0; 
}
