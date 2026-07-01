#include <iostream>
using namespace std;


class Guns{
    public:
        string isim;
        int mermi_kapasitesi;
        string renk;

        //Virtual Methods:
       virtual void ates()=0;
};

class Ak47: public Guns{
    public:
        bool seritek;
        int kayisuzunlugu;
        bool durbun;

    void ates(){
        cout<<"bom bom";
    }
};

class Pistol : public Guns{
    public:
        int kurmakoludeseni;


    void ates(){
        cout<<"bam bam";
    }
};

class M1 : public Guns{
    public:
        bool seritek;
        int kayisuzunlugu;
        int kurmaPozisyonu;
    
    void ates(){
        cout<<"bum bum";
    }
};

/*void atesEt(Guns* gun){
    gun->ates();
}
    */

void atesEt(Guns &gun){
    gun.ates();
}

int main(){

    Ak47 ak47;
    Pistol pistol;
    M1 m1;


    atesEt(ak47);
    atesEt(pistol);
    atesEt(m1);

}