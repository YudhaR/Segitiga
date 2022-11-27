#include <iostream>

/*
    Program Segitiga
    Ket : Program mencari luas dan keliling Segitiga
    By  : Yudha Rizqia Grafer
    Tgl : 28 September 2022
*/

using namespace std;

int main()
{
    //Kamus
    int a, t, m, Hasil_keliling, Hasil_luas;

    //Algoritma
    cout << "Masukkan Alas : ";
    cin >> a;
    cout << "Masukkan Tinggi : ";
    cin >> t;
    cout << "Masukkan Sisi Miring : ";
    cin >> m;
    Hasil_keliling = a + t + m;
    Hasil_luas = (a * t)/ 2;
    cout << "Hasil Keliling : " << Hasil_keliling << endl;
    cout << "Hasil Luas : " << Hasil_luas;
    return 0;
}
