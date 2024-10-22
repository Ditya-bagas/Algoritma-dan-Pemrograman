#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "masukan jumlah baris yang diinginkan: ";
    cin >> n;

    cout << "pola  baris \n";

// perulangan for

    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            cout << "*" ;
        }
    cout << endl;
    }

    return 0;
}


