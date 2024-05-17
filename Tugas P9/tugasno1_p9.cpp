#include <iostream>
#include <string>

class Robot {
    private:
        std::string nama;
        int umur;
        std::string mbti;

    public:
        Robot(std::string n, int u, std::string c) {
            nama = n;
            umur = u;
            mbti = c;
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

        void setMbti(std::string c){
            mbti = c;
        }

        std::string getKreditskor(){
            return mbti;
        }

        void tampilkanInfo() {
            std::cout << "Nama: " << nama << ", Umur: " << umur << ", MBTI: " << mbti << std::endl;
        }
    };

int main() {
    Robot r1("Fulano", 20, "ENFP");

        std::cout << "Informasi CreditScore Masyarakat: " << std::endl; 
        r1.tampilkanInfo();

    return 0;
}
