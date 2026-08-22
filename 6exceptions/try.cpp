#include  <iostream>    

double  bolme(int a, int b){

    try{
        if(b<1){
            throw -1;
        }

        if(a<0){
            throw"0 bolunemez";

        }

        return a/b;

    }catch(int err){

        std::cout<<err<<"bir sayi 0'a bolunemez";
    }catch(const char* err){
        std::cout<<*err<<"bir sayi 0'a bolunemez";

    }
}

int main(){

    std::cout<<bolme(0,1);


    return 0;
}