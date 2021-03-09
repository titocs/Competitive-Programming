#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll n, m, terambil = 0, isi = 0;
    cin >> n >> m;
    ll arr[n], arr1[m];
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    for(int i=0; i<m; ++i){
        cin >> arr1[i];
    }
    sort(arr, arr + n);
    sort(arr1, arr1 + m, greater<int>());
    /*
    5 5
    ukuran kaki         ukuran sepatu
    11                  11 :: 1 --> oleh uk 11
    10                  9 
    12                  10 :: 1 --> oleh uk 10
    10                  11 :: 1 --> oleh uk 10
    13                  13 :: 1 --> oleh uk 12
    syarat: x || x + 1
    */
    for(int i=0; i<m; ++i){
        for(int j=n-1; j>=0; --j){
            int temp = arr1[i] - arr[j];
            if(temp == 0 || temp == 1){
                terambil++; arr[j] = -1;
                break;
            }
        }
    }
    cout << terambil;
}
