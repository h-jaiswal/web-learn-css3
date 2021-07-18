#include <bits/stdc++.h>
#define ll long long

// 8 7
// 1 1 3 3 3 5 8 8
// 1 3 3 4 5 5 5  

// 11

// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
// wrong ans

using namespace std;

void ans() {
    ll n, m;
    cin >> n >> m;
    ll * a = new ll[n];
    ll * b = new ll[n];
    
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    
    ll * temp = n > m ? a : b;
    a = n < m ? a : b; // smaller
    b = temp; // larger
    
    // two pointer approach
    int i = 0;
    int j = 0;
    int k = 0;
    int count = 0;
    while(i<min(n,m)) {
        if(b[j] > a[i]) {
            i++;

        }
        if(b[j] == a[i]) {
            j++;
            cout << a[i] << " "  << b[j] << endl;
            count++;
        }
    }

    cout<<count<<endl;
}
int main() {
    ans();    
    return 0;
}