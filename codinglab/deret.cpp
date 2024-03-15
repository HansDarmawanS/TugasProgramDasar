#include <iostream>

using namespace std;

int main(){

    int bilangan,jumlah_digit;

    std::cout << "Masukan Angka :";
    std::cin >> bilangan;

    while (bilangan!=0){
        bilangan/=10;
        jumlah_digit++;
    }

    std::cout << "Jumlah Digit : "<< jumlah_digit << endl;
    

    return 0;
}