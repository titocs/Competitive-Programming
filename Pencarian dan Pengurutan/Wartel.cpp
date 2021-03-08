#include <bits/stdc++.h>
using namespace std;

string nama[100000], nomor[100000];
int N;

void binary(string cari){
    int hasil = -1, kiri=0, kanan=N-1;
    while((kiri<=kanan) && (hasil== -1)){
        int tengah= (kiri+kanan)/2;
	if(cari < nama[tengah])
            kanan = tengah-1;
	else if(cari > nama[tengah])
            kiri = tengah+1;
	else
            hasil = tengah;
    }
    if(hasil == -1)
        cout << "NIHIL" << "\n";
    else
	cout << nomor[hasil] << "\n";
}

int main(){
    int Q;
    cin >> N >> Q;
    string query[Q];
    for(int i=0; i<N; i++)
	cin >> nama[i] >> nomor[i];
    for(int i=0; i<Q; i++)
        cin >> query[i];
    for(int i=0; i<Q; i++)
	binary(query[i]);
}
