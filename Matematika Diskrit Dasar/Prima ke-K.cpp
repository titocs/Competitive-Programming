#include <bits/stdc++.h>
using namespace std;
 

#define MAX_SIZE 1000005
 
void SieveOfEratosthenes(vector<int>& primes){
    bool cekprime[MAX_SIZE];
    memset(cekprime, true, sizeof(cekprime));
    for(int p = 2; p * p < MAX_SIZE; p++){
        if (cekprime[p] == true) {
            for(int i = p * p; i < MAX_SIZE; i += p)
                cekprime[i] = false;
        }
    }
    for(int p = 2; p < MAX_SIZE; p++)
        if(cekprime[p])
            primes.push_back(p);
}

int main(){
    vector<int> primes;
    SieveOfEratosthenes(primes);
    int banyak;
    cin >> banyak;
    for(int i=0; i<banyak; ++i){
        int n; cin >> n;
        cout << primes[n-1] << endl;
    }
    return 0;
}
