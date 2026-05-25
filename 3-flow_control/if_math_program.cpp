#include <iostream>

int main(){
    
    int num1;
    int num2;
    char operation;

    
    std::cout << "Enter the first num\n";
    std:: cin >> num1;

    std::cout<< "Enter the second num\n";
    std::cin >> num2;

    std::cout << "Enter the operation.(+,-,x,)\n";
    std::cin>> operation;

    
    if(operation='+'){
        std::cout<<num1+num2;
    }
    else if(operation=='-'){
        std::cout<<num1-num2;
    }
    else if(operation=='x'){
        std::cout<< num1*num2;
    }
    else{
        std::cout<< "Please enter a valid transaction.\n";
    }


    return 0;
}