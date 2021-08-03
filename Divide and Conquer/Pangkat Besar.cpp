#include <bits/stdc++.h>
using namespace std;

int a, b, hasil;
bool besar;
typedef long long ll;
int solve(int a, int b){
    if(b == 0)
        return 1;
    else{
        ll temp = solve(a, b/2);
        ll hasil = temp*temp;
        if(b % 2 == 1)
            hasil = hasil*a;
        if(hasil > 999999)
            besar = true;
        return hasil % 1000000;
    }
}

int main(){
    cin >> a >> b;
    if(a > 999999)
        besar = true;
    hasil = solve(a % 1000000, b);
    if(besar)
        printf("%06d\n", hasil);
    else
       cout << hasil;
}
