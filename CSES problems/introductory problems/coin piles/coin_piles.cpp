#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){



    
    ll a, b, t;
    cin >> t;
    while (t--){
        cin >> a >> b;
        (a + b) % 3 == 0 && 2 * a >= b && 2 * b >= a? cout << "YES": cout << "NO";
        cout << '\n';
    }
    return 0;
}