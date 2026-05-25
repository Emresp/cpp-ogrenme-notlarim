#include <iostream>

void print(int result){
    std::cout<<result;
}

void sum(int a, int b){
    print(a+b);
}




class mathematic{
    public:
        int a;
        int b;
        int result=a+b;

    void sum(){
        this->result=this->a + this->b;
    }    
    void print() {
        std::cout<< this-> result;
    }
};

int main(){
    //procedures (step by step)
    int a=8;
    int b =10;
    std::cout <<a+b;

    std::cout <<"\n";

    //functional
    sum(a,b);

    std::cout <<"\n";

    //oop
    mathematic math;
    math.a=10;
    math.b=8;
    math.sum();
    math.print();




}