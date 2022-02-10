#include <bits/stdc++.h>
using namespace std;


#define fpb(a, b) __gcd(a, b)
typedef long long ll;

int main(){
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d;
    ll pembilang = a*d + c*b;
    ll penyebut = b*d;
    ll div = fpb(pembilang, penyebut);
    cout << pembilang/div << " " << penyebut/div;
}
