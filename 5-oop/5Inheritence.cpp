#include <iostream>
using namespace std;

class Guns{
    public:
        string name;
        int bullet_capacity;
};

class Ak47 : public Guns{
    public:
        bool auto_single;
        bool scope;
    
        void shoot(){
            cout<<"There is a Gun ak-47";
        }

};

class Pistol : public Guns{
    public:
        void shoot(){
            cout<<"There is a Gun pistol";
        }

};


int main(){

    Ak47 ak47;
    ak47.shoot();

    cout<<"\n";

    Pistol pistol;
    pistol.shoot();

    ak47.bullet_capacity=30;

    pistol.bullet_capacity=15;


    
    









    return 0;
}