#include <bits/stdc++.h>
using namespace std;

int main(){
    int temp; bool cek;
    string a, b; cin >> a >> b;
    if(a.size() - b.size() != 1)
        cek = false;
    else{
        for(int i=0; i<a.size(); ++i){
            if(a[i] != b[i]){
                temp = i;
                break;
            }
        }
        a = a.erase(temp, 1);
        if(a == b)
            cek = true;
    }
    cout << (cek ? "Tentu saja bisa!" : "Wah, tidak bisa :(");
}
