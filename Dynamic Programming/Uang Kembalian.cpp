#include <bits/stdc++.h>
using namespace std;

int n, x;
int arr[500];
bool computed[50069];
int memo[50069];
int solve(int x){
    if(x == 0)
        return 0;
    if(computed[x])
        return memo[x];
    
    int best = 50000;
    for(int i=0; i<n; ++i){
        if(arr[i] <= x)
            best = min(best, solve(x - arr[i]) + 1);
    }
    computed[x] = true;
    memo[x] = best;
    return best;
}

int main(){
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    cin >> x;
    memset(computed, 0, sizeof(computed));
    cout << solve(x);
}
