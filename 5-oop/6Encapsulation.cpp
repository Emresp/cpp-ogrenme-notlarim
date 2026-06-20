#include <iostream>
using namespace std;

class Payment{
    private:
        float tutar;
    public:
        std::string parabirimi;    

        void settutar(float t){
            if(t<0){
                tutar=0.1;

            }
            else{
                tutar =t;
            }

        }

        void pay(){
            cout<< tutar<<"odeme alindi";
        }
 }

int main(){
    Payment pay;
    pay.settutar(50.05);
    pay.parabirimi="tl";
    pay.pay();


    return 0;
}