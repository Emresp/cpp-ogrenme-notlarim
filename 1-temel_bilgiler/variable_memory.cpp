#include <iostream>

int main(){

    int x =10;
    int* xptr= &x;

    std::cout<< "Value of variable x: \n"<< x;
    std::cout<< "Memory address of variable x: \n"<< &x;
    std::cout<< "Memory adress of pointer variable with: \n"<< xptr;





    return 0;
}