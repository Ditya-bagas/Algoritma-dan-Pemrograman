#include <iostream>
using namespace std;

int main (){
    int a,b,c;
    cout << "masukan angka di a: ";
    cin >> a;
    cout << "masukan angka di b: ";
    cin >> b;
    cout << "a = " << a << ", b = " << b << endl;

    if ( b > a){
        int c= a;
        a= b;
        b= c;
        cout << "karena b " << b << " lebih besar a " << a << ",maka tukar posisi." << endl;
        cout << "akan di ubah menjadi :"<< endl;
        cout << "a = " << a << ", b = " << b << endl;
    }
    else{
        cout << "tidak berubah";
    }

return 0;
}


