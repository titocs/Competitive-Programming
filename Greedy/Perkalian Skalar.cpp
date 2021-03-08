#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, count = 0;
    cin >> N;
    long long arr1[N], arr2[N];
    for(int i=0; i<N; ++i){
        cin >> arr1[i];
    }
    sort(arr1, arr1 + N, greater<int>());
    for(int i=0; i<N; ++i){
        cin >> arr2[i];
    }
    sort(arr2, arr2 + N);
    for(int i=0; i<N; ++i){
        count += arr1[i]*arr2[i];
    }
    cout << count;
}
