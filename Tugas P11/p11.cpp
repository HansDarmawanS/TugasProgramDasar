#include <iostream>
#include <string>

using namespace std;

class hewan{
    public :
        void predator(){
            cout  << "Hewan Ini Predator " << endl;
        }
        void taring(){
            cout << "Hewan Ini Bertaring" << endl;
        }
        void cakar(){
            cout << "Hewan Ini Memiliki Cakar" << endl;
        }
};

class harimau : public hewan{
    public:
        void predator(){
            cout << "Ini Adalah Harimau :" << endl;
        }
    };
class singa : public hewan{
    public:
        void predator(){
            cout << "ini adalah singa :" << endl;
        }
    };
class macan : public hewan{
    public:
        void predator(){
            cout << "ini adalah macan :" << endl;
        }
    };

int main(){
        harimau hrm;
        hrm.predator();
        hrm.taring();
        hrm.cakar();

        cout << endl;

        singa sing;
        
        sing.predator();
        sing.taring();
        sing.cakar();

        cout << endl;

        macan mc;
        mc.predator();
        mc.taring();
        mc.cakar();

    return 0;
}  