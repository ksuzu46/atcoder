#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << ((a + b) % 2 == 0 ? (a + b) / 2 : (a + b) / 2 + 1) << "\n";
    
    return 0;
}
