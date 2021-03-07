#include <bits/stdc++.h>
using namespace std;
//#define fx setiosflags(ios::fixed);
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
    IOS; double x; int n;
    double arr[100005];
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    if( n%2 == 0)
        printf("%.1f", (arr[n/2] + arr[n/2 - 1])/2);
    else
        printf("%.1f", arr[n/2]);
}