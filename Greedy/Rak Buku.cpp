#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll N, B, arr[100009], count = 0, sum = 0;
    cin >> N >> B;
    for(int i=0; i<N; ++i){
        cin >> arr[i];
    }
    sort(arr, arr + N, greater<int>());
    for(int i=0; i<N; ++i){
        sum += arr[i];
        count++;
        if(sum > B )
            break;
    }
    cout << count;
}
