#include <iostream>
using namespace std;

int main(){
    
// Nama  : Muammar Ramadhani Maulizidan
// NIM   : 09031282227065
// Kelas : SIREG B

    double angka1, angka2, hasil;
    char operatornilai, lanjut;

    cout << "     PROGRAM KALKULATOR SEDERHANA" << endl;
    cout << "=======================================" << endl;

    cout << "MEMULAI PROGRAM KALKULATOR? (y/t) = ";
    cin >> lanjut;

    if (lanjut == 'y' || lanjut == 'Y'){
        cout << "MASUKKAN ANGKA PERTAMA            = ";
        cin >> hasil;
        while (lanjut == 'y' || lanjut == 'Y'){
            cout << "MASUKKAN OPERATOR (+ - / *)       = ";
            cin >> operatornilai;
            cout << "MASUKKAN ANGKA KEDUA              = ";
            cin >> angka2;

            if (operatornilai == '+')
            {
                hasil = hasil + angka2;
            }
            else if (operatornilai == '-')
            {
                hasil = hasil - angka2;
            }
            else if (operatornilai == '/')
            {
                hasil = hasil / angka2;
            }
            else if (operatornilai == '*')
            {
                hasil = hasil * angka2;
            }
            else
            {
                cout << "MASUKKAN OPERATOR YANG BENAR" << endl;
            }
            cout << "HASIL                             = " << hasil << endl;            
            cout << "Lanjut mengoperasi angka?(y/t)    = ";
            cin >> lanjut;
            cout << "HASIL TERAKHIR                    = " << hasil << endl;
        }
    }
        cout << "PROGRAM BERAKHIR";
}
