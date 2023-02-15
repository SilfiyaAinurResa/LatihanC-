#include <iostream>

using namespace std;

int main()
{
    string nama;
    int umur;
    char jk;

    cout << "Siapa Namamu?" << endl;
    cout << "Jawab :";
    cin >> nama;

    cout << "Berapa umurmu?" << endl;
    cout << "Jawab :";
    cin >> umur;

    cout << "Kamu laki-laki atau perempuan? (L/P)" << endl;
    cout << "Jawab :";
    cin >> jk;

    cout << "Salam kenal! " << nama << "Anda berusia " << umur;
    cout << "dan Anda berjenis kelamin " << jk;

    return 0;
}
