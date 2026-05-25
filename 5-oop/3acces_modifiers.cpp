#include <iostream>
#include <string>

using namespace std;

class Payment{
    //Private members: Inaccessible from outside the class.
    private:

        string hashCode="12345678";

    //Protected members: Accessible within this class and derived classes.    
    protected:
        string bankname="Ziraat"; 


    public:
         string currency="TRY";
         string amount="0.0";

         void pay(){
            cout<<"Sending data to bank:"+this->currency+" Amount:"+this->amount+" HashCode: "+this->hashCode;
         }
};

//The bank name variable is accessible because it was inherited.
class test: public Payment{
    public:
        void halfacces(){
            test::bankname="Ziraat";
        }

};

int main(){
    Payment payment;
    payment.currency="TRY";
    payment.amount="65.90";
    payment.pay();
    return 0;
}