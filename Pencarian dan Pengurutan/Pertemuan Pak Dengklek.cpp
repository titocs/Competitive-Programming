#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; string s;
    string arr[5005];
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(arr[j].length() > arr[j+1].length()){
                swap(arr[j], arr[j+1]);
            }
            else if(arr[j].length() == arr[j+1].length()){
                if(arr[j].substr(0, arr[j].length()) > arr[j+1].substr(0, arr[j+1].length()))
                    swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i=0; i<=n; ++i){
        cout << arr[i] << endl;
    }
}