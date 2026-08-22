#include  <iostream>

class Silah{
    public:
        Silah(){
            std::cout<<"olustu";
        }
    ~Silah(){
        std::cout<<"Silindi";
    }
}

int main(){

    {
        Silah* silah=new Silah;
    }
    //new kullanarak oluşturursam heap olur ben silene kadar açık olur 

    std::cout<<"Hello World";
}