#include <bits/stdc++.h>

//  CORRECT ANSWER 100%

using namespace std;

long long n, x, k;

string ans() {
    cin >> n >> x >> k;
    if (x % k == 0 || ((n+1-x) % k == 0)) {
        return "YES";
    }
    return "NO";
}
int main() {
    int t;
    cin >> t;
    string out = "";
    while (t > 0)
    {
        out+=ans() + "\n"; t--;
    }
    cout << out;
    return 0;
}