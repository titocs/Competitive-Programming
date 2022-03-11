#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    vector<pair<int, int>> arr;
    for(int i=0; i<n; ++i){
        int x, y; cin >> x >> y;
        int akhir = x + y;
        arr.push_back(make_pair(x, akhir));
    }
    sort(arr.begin(), arr.end(), [&](pair<int, int> a, pair<int, int>b){
        return a.second < b.second;
    });
    int selected_count = 0;
    int start = 0;
    for(int i=0; i<n; ++i){
        if(arr[i].first >= start){
            selected_count++;
            start = arr[i].second;
        }
    }
    cout << selected_count++;
}
