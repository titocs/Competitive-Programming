#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

stack<int> myStack;

int main(){
    int banyak, x, low;
    ll count = 0;
    cin >> banyak;
    vector<int> vec(banyak + 1);
    for(int i=1; i<=banyak; ++i){
        cin >> vec[i];
    }
    for(int i=1; i<=banyak; ++i){
        if((i == 1) || (i == banyak))
            myStack.push(vec[i]);
        else if((vec[i] <= myStack.top()) && (vec[i] <= vec[i+1])){
            low = min(myStack.top(), vec[i+1]);
            count += low;
        } 
        else
            myStack.push(vec[i]);
    }

    int y = myStack.size();
    while(y > 1){
        int temp = myStack.top();
        myStack.pop();
        if( temp > myStack.top())
            count += temp;
        else
            count += myStack.top();
        y--;
    }
    cout << count;
}
