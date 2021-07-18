#include <bits/stdc++.h>

#define long long ll
using namespace std;

int x, a, b;
string ans() {
    cin >> x >>a >> b;

    return to_string((10l * a) + ((10l * b) * (100l - x))) ;
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

// https://www.codechef.com/MAY21C/problems/SOLBLTY

// AC