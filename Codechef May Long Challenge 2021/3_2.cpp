#include <bits/stdc++.h>

using namespace std;

long long n;

long long f(long long n) {
    return (n ^ (n+1));
}
long long ans() {
    cin >> n;
    long long count = 0;
    for (long long x = 0; x < pow(2, n); x = x + 1)
    {
        if ( f(x) == f(x+2) )  {
            count = count + 1;
        }
    }
    return count;
}
int main() {
    int t;
    cin >> t;
    string out = "";
    while (t > 0)
    { 
        out+= to_string(ans()) + "\n"; t--;
    }

    cout << out;
    return 0;
}