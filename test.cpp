#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

void solve() {
    string s;
    cin >> s;

    int n = s.size();

    int cnt = 0;

    for (int i=0, j=n-1; i <= j; i++,j--) {
        if (s[i] != s[j]) cnt++;
    }

    if ((cnt == 0 and (n%2 == 1)) or cnt == 1) cout << "YES" << nl;
    else cout << "NO\n";


}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t = 1;  
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
} 
