#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, a;
    cin >> s;
    int asterix = s.find("*");
    int tt; cin >> tt;
    while(tt--){
        cin >> a;
        if(s.length() - 1 > a.length()) continue;
        else{
            string depan = s.substr(0, asterix);
            string belakang = s.substr(asterix + 1, s.length()-asterix-1);
            if(a.substr(0, asterix) == depan && a.substr(a.length() - belakang.length(), belakang.length()) == belakang)
                cout << a << '\n';
        }
    }
}
