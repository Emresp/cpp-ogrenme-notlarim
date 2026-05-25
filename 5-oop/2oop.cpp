#include <iostream>


class Hesapla
{
    public:
        int genislik;
        int yukseklik;
        int alan;

        void giris(){
            std::cout<<"Yukselik giriniz";
            std::cin>>yukseklik;

            std::cout<<"Genislik giriniz:";
            std::cin>>genislik;
        }
        void hesapla(){
            alan=yukseklik*genislik;
            std::cout << alan;
        }

};


int main(){

    Hesapla hesap;
    hesap.giris();
    hesap.hesapla();

    


    return 0;
}