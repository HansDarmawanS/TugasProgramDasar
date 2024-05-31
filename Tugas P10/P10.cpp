#include <iostream>
#include <string>

class number1{
    private:
        int y;

    public:
        void setY(int nilai){
            y = nilai;
    } 
        int getY(){
            return y;
        }
};

class number2{
    public:
        int x;
};

int main(){
    number1 satu;
    number2 dua;

    satu.setY(25);
    dua.x = 30;

   std:: cout << "y :" <<  satu.getY() << std::endl;
    std:: cout << "x :" << dua.x << std::endl;
}