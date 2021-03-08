#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> v;
    int n, angka;
    cin >> n;
    string s;
	
    for(int i=0; i<n; ++i){
        cin >> s;
		    if(s == "push_back" || s == "push_front")
			      cin >> angka;
		    if(s == "push_back")
			      v.push_back(angka);
		    if(s == "push_front")
			      v.push_front(angka);
		    if(s == "pop_back")
			      v.pop_back();
		    if(s == "pop_front")
			      v.pop_front();
	  }
    for(int i=0; i<v.size(); ++i)
		    cout << v[i] << endl;
}
