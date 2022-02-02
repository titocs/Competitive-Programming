#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
int main(){
    ll n, x, y, temp;
    cin >> n;
    string s;
    deque<int> stack;
    for(int i=0; i<n; ++i){
        cin >> s;
        if(s == "add"){
            cin >> x >> y;
            for(int j=0; j<y; ++j)
                stack.push_back(x);
            cout << stack.size() << endl;
        }
        if(s == "del"){
            cin >> y;
            temp = stack[0];
            for(int j=0; j<y; ++j)
                stack.pop_front();
            cout << temp << endl;
        }
        if(s == "rev")
            reverse(stack.begin(), stack.end());
    }
}
