#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
    stack<ll> myStack;
    ll prob, x, y, sum = 0;
    string opsi;
	  cin >> prob;
	  for(int i = 0; i < prob; ++i){
		    cin >> opsi;
		    if(opsi == "add"){
			      cin >> x >> y;
			      for(int i = 0; i < y; ++i){
				        myStack.push(x - sum);
			      }
			      cout << myStack.size() << endl;
		    }
		    else if(opsi == "del"){
			      cin >> x;
			      cout << myStack.top() + sum << endl;
			      for(int i = 0; i < x; ++i){
				        myStack.pop();
			      }
		    }
		    else if(opsi == "adx"){
			      cin >> x;
			      sum += x;
		    }
		    else if(opsi == "dex"){
			      cin >> x;
			      sum -= x;
		    }
	  }
}
