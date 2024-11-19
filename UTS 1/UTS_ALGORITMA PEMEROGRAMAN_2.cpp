#include <iostream>
using namespace std;

int main(){
    int n;
    cout << " Angka yang diingin: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        if ( i % 2 == 0)
        cout << " G ";
        else
        cout << i +1;

    }
    cout << endl;
    return 0;

}
