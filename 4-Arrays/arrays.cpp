#include <iostream>

int main(){

    int points[5]={75,80,90,85,55};

    //starting address in ram
    std::cout<<points<<"\n";

    int*ptr=points;


    std::cout<<"Adress of second element: "<<points+1;
    std::cout<<"Value of second element: "<<*(points+1);


    return 0;
}