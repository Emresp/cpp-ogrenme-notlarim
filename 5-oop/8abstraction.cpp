#include <iostream>
using namespace std;    

class Hayvan{
    public:
    //virtual method eğer sıfıra eşitlenirse bu sınıfı miras alan her sınıfın da aynı bu isimle method oluşturması gerekir. 
        virtual void sescal()=0;

};

class Kedi : Hayvan{
    public:
    void sescal(){
        cout<<"Kedi";
    }
}

class Kopek : Hayvan{
    public:
    void sescal(){
        cout<<"Hav"
    }
}

class Ordek : Hayvan{
    public:
    void sescal(){
        cout<<"Vak";
    }
}

class Fare: Hyavan{
    public:
    void sescal(){
        cout<<"civ";
    }
}

void tumsescal(Hayvan* hayvanptr){

}

int main(){
    Kopek kopek;
    Kedi Kedi;
    Ordek ordek;

    tumsescal(&kopek)
    tumsescal(&fare)
    return 0;
}