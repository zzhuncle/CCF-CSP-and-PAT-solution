#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    gg t, a, b, c;
    cin >> t;
    for (gg i = 1; i <= t; ++i) {
        cin >> a >> b >> c;
        cout << "Case #" << i << ": " << (a + b > c ? "true" : "false") << "\n";
    }
    return 0;
}