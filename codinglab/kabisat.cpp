#include <iostream>

using namespace std;

int main(){

    int tahun;

    cout << "Masukan Tahun :";
    cin >> tahun;

    if ((tahun%4 == 0 && tahun %100!=0)|| tahun % 400 == 0)
    {
        cout << tahun << ": Ini tahun Kabisat" << endl;
    }
    else{
        cout << tahun << ": Ini bukan tahun Kabisat" << endl;
    }

    return 0;
}