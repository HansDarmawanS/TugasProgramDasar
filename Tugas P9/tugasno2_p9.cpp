#include <iostream>
#include <string>

class CreditScore {
    private:
        std::string nama;
        int umur;
        std::string kreditskor;

    public:
        CreditScore(std::string n, int u, std::string c) {
            nama = n;
            umur = u;
            kreditskor = c;
        }

        void setNama(std::string n) {
            nama = n;
        }

        std::string getNama() {
            return nama;
        }

        void setUmur(int u) {
            umur = u;
        }

        int getUmur() {
            return umur;
        }

        void setKreditskor(std::string c){
            kreditskor = c;
        }

        std::string getKreditskor(){
            return kreditskor;
        }

        void tampilkanInfo() {
            std::cout << "Nama: " << nama << ", Umur: " << umur << ", Credit Score: " << kreditskor << std::endl;
        }
    };

int main() {
    CreditScore cs("Xi Fu Tang", 20, "1.000.000");

        std::cout << "Informasi CreditScore Masyarakat: " << std::endl; 
        cs.tampilkanInfo();

        cs.setNama("Mao Mao");
        cs.setUmur(23);
        cs.setKreditskor("2.000.000");

        std::cout << "Informasi setelah diubah: " << std::endl;
        cs.tampilkanInfo();

    return 0;
}
