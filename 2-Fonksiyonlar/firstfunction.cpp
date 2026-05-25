#include <iostream>
#include <string>

//Function descripton 
void message(char msg, char msg2){
    std::cout<< msg<< msg2;
        std::cout<<"\n";

}

//Functions can be called nested.
int sum(int num1, int num2){
    message('E','A');
    return num1+num2;
}


//The `subtraction` function is overloaded. They are actually two different functions because their parameters are different. 
//The compiler decides which one to execute based on the parameters it receives, whichever is the best option.

// An overloaded function is a function that can perform different tasks while having the same name.
int subtraction(int num1, int num2){
    return num1-num2;
}

int subtraction(double num1, double num2){
    return num1-num2;
}

//default parameter value
void print(std::string text ="NULL"){
    std::cout << text;
}



int main(){
    print();

    std::cout<<"\n";
    std:: cout << sum(10,11);
    std::cout <<"\n";
    std:: cout << subtraction(5.3,3.2);

}