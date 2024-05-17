#include <iostream>
using namespace std;

class Creditscore {
    public:
        string nama;
        int umur;
        string kreditskor;

    void tampilkanInfo(){
        cout << "Nama: " << nama <<endl;
        cout << "Umur: " << umur <<endl;
        cout << "Credit Score: " << kreditskor <<endl;
    }
};

int main(){
    Creditscore cs;

    cs.nama = "Fulano";
    cs.umur = 19;
    cs.kreditskor = "500.000";

    cs.tampilkanInfo();

    return 0;
}