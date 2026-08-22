#include  <iostream>

class Silah{
    public:
        Silah(){
            std::cout<<"olustu";
        }
    ~Silah(){
        std::cout<<"Silindi";
    }
};

int main(){
    int adet;

    std::cout<<"dizi boyutu nedir ?"<<std::endl;
    std::cin>>adet;

    int* dizi =new int[adet];

for(int i=0; i<adet; i++){
    std::cin >> dizi[i];
}

std::cout<<"Girilen Elamanlar"<<std::endl;
for(int i=0; i<adet; i++){
    std::cout<< dizi[i];
}

delete[] dizi;
}