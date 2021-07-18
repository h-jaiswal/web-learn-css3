#include <bits/stdc++.h>

#define ull unsigned long long
#define MODULO 1000000007ull

using namespace std;

ull power(ull x, ull  y, ull p)
{
    ull res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
 
ull n;

ull ans() {
    cin >> n;
    return power( 2, n-1, MODULO );
}
int main() {
    ull t;
    cin >> t;
    string out = "";
    while (t > 0)
    {
        out+= to_string(ans()) + "\n"; t--;
    }

    cout << out;
    return 0;
}