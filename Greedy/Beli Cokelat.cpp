#include <bits/stdc++.h>
using namespace std;


typedef unsigned long long ull;
int main(){
    ull n, d; cin >> n >> d;
    ull total_harga = 0, count_bebek = 0;
    vector<pair<ull, ull>> arr(n);
    for(long int i=0; i<n; ++i){
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end(), [&](pair<ull, ull> a, pair<ull, ull>b){
        return a.first < b.first;
    });
    int i=0;
    while(i < n && (arr[i].first*arr[i].second <= d)){
        count_bebek += arr[i].second;
        d -= arr[i].first*arr[i].second;
        i++;
    }
    if(i < n)
        count_bebek += d/arr[i].first;
    cout << count_bebek;
}
