#include <iostream>

int main()
{
    int array_size;
    int element;
    float average, sum=0;

    std::cout<<"Enter the size of the array:";
    std::cin>>array_size;

    int ages[array_size];

    for(int i=0; i<array_size; i++){
        std::cout<<"Enter "<<i+1<<" element:";
        std::cin>>element;
        ages[i]=element;
        sum += element;
    }
    average = sum / array_size;
    
    std::cout<<"The average of the array is: "<<average<<"\n";

    int lowestage=ages[0];
    int higestage=ages[0];

    for(int age : ages)
    {
        if(age<lowestage)
        {
            lowestage=age;
        }
        if(age>higestage)
        {
            higestage=age;
        }

    }
    
    std::cout<<"The the lowest age of the array is: "<<lowestage<<"\n";
    std::cout<<"The the higest age of the array is: "<<higestage;



    return 0;
}