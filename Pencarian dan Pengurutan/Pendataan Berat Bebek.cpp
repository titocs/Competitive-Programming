#include <bits/stdc++.h>
using namespace std;

#define fpb(a, b) __gcd(a, b)
typedef long long ll;

ll n;
vector<ll> v;

int BinarySearch(ll input) {
    ll hasil = -1;
    ll kiri = 0, kanan = n-1;

    while (( kiri <= kanan) && (hasil == -1) ) {
        ll tengah = (kiri + kanan)/2;
        if ( input >= v[tengah] ) {
        kiri = tengah + 1;
        if ( kiri > n-1 )
            return kiri;
        if ( input < v[kiri] )
            hasil = kiri;
        }
        else if (input < v[tengah]) {
            kanan = tengah - 1;
            if (kanan < 0)
                return 0;
            if ( input > v[kanan] )
                hasil = kanan + 1;
        }
   }
   return hasil;
}

void legthofVec(ll x, ll y) {
    cout << BinarySearch(y) - BinarySearch(x) << endl;
}

int main(){
    ll q, x, y;
    cin >> n;
    for(int i=0; i<n; ++i) {
        ll masukan;
        cin >> masukan;
        v.push_back(masukan);
    }
    cin >> q;
    for (int i=0; i<q; ++i){
        cin >> x >> y;
        legthofVec(x, y);
   }
}