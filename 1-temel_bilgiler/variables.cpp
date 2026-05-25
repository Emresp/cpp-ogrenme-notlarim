#include <iostream>
#include <typeinfo>


int main(){
    int num1, num2;

    num1=18;
    num2=20;

    std::cout << "We are learning about variables.\n";
    
    std :: cout << "Values\n";

    std:: cout <<"Num1: " << num1 << "\n";

    std:: cout << "Num2: " << num2 << "\n";

    std:: cout << "\n\n\n";


    bool x = true;

    std:: cout << sizeof(x) << "\n";


    // The auto keyword automatically detects the type of a variable based on the value you assign to it
    auto y = "test";
    
    std:: cout << typeid(y).name()<<"\n\n";

    // The output "PKc" stands for "Pointer to Konstant char" (const char*).

    // All of these descriptions are correct.
    int a =5;
    int b(2);
    int c{3};

    // CONSTANT

    // There are two constants: Literal Constants, Symbolic Constants

    //Literal Constants:
    std:: cout << "Constant\n\n";
    bool isActive = true;
    // It only changes via the source code.


    //Symbolic Constants:
    const float pi = 3.14;
    //pi=3.14593 eror. A symbolic constant never changes afterwards.


    //TYPE CONVERSİON

    int value;

    value = static_cast<int>(5.9);

    std:: cout << "Value: " << value<<"\n";
    
    char character = 65;
    std:: cout << "Before Conversion\n";
    std::cout << "Character: " << character<<"\n";

    int newcharacter=static_cast<int>(character);

    std:: cout << "After Conversion\n";
    std::cout << "Character: " << newcharacter;



    return 0;
}