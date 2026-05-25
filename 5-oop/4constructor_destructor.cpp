#include <iostream>
#include <string>
using namespace std;


class Payment{
    public:
        float amount;
        string currency;

        Payment(){
            cout<<"Please Enter The Value";
        }


        ~Payment(){
            cout<<" Finish";
        }

        void payinfo(){
            cout<<"Amount: " << this->amount << currency;
            
        }
};

int main(){

    Payment test;

    test.currency="TRY";
    test.amount=56.90;


    return 0;
}