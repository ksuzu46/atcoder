#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;
    
    cout << min(n % k, abs((n % k) - k)) << "\n";
    return 0;
}