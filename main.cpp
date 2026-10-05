#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    // Bai mau: doc hai so nguyen va in tong. Thay bang loi giai cua ban.
    ll a, b;
    if (!(cin >> a >> b)) return;
    cout << a + b << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t; // Chi bat khi de bai co so luong bo test o dau.
    while (t--) solve();
    return 0;
}
