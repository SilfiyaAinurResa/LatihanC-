#include <iostream>

using namespace std;

int main()
{

    int i;

    cout << "FOR" << endl;

    cout << "-----------------" << endl;
    cout << "Perulangan 1 kali" << endl;
    for(i=0 ; i<10; i++) {
        cout << "Perulangan ke: "<< i << endl;
    }

    cout << "-----------------" << endl;
    cout << "Perulangan 2 kali" << endl;
    for(i=0 ; i<10; i+=2) {
        cout << "Perulangan ke: "<< i << endl;
    }

    cout << "==================" << endl;

    int j = 0;
    char tambah = 'y';

    cout << "WHILE" << endl;
    while(tambah == 'y'){
        cout << "Perulangan ke: " << j << endl;
        cout << "Apakah ingin nambah? (y/n) ";
        cin >> tambah;
        j++;

    }

    return 0;
}
