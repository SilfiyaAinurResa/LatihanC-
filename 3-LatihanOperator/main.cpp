#include <iostream>

using namespace std;

int main()
{
    int a, t, r;
    float LuasSegitiga,LuasLingkaran;
    float Phi = 3.14;

    cout << "------------------------------" << endl;
    cout << " APLIKASI PENGHITUNG SEGITIGA " << endl;
    cout << "------------------------------" << endl;

    cout << "Masukkan Alas Segitiga: " << endl;
    cin >> a;
    cout << "Masukkan Tinggi Segitiga: " << endl;
    cin >> t;
    LuasSegitiga = 0.5*a*t;
    cout << "Luas Segitiga adalah: " << LuasSegitiga <<" cm2" << endl;



    cout << "------------------------------" << endl;
    cout << " APLIKASI PENGHITUNG LINGKARAN " << endl;
    cout << "------------------------------" << endl;

    cout << "Masukkan jari-jari Lingkaran: " << endl;
    cin >> r;
    LuasLingkaran = Phi*r*r;
    cout << "Luas Lingkaran adalah: " << LuasLingkaran <<" cm2" << endl;

     return 0;
}
