#include <iostream>

using namespace std;

int main()
{
    int i;
    string xiirpl1[] = {"Mawar", "Melati", "Kenanga", "Kamboja", "Matahari"};
    cout << "Yang paling cakep di XII RPL 1 adalah: " << xiirpl1[1] << endl;
    cout << "diantara: ";
    for(i=0 ; i<5; i++){
        cout << xiirpl1[i] <<", ";
    }
    return 0;
}
