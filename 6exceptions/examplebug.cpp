#include <iostream>


double bolme(int a,int b,bool& sonuc){
    if(b<1){
        sonuc = false;
        return 0;
    }
    return a/b;
}


int main(){
    bool sonuc=true;

    std::cout << bolme(10,0,sonuc) << std::endl;
    std::cout<<sonuc;

    return 0;
}