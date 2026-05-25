#include <iostream>
#include <string>


int main(){

    //There is also a "for-each loop" (introduced in C++ version 11 (2011)), which is used exclusively to loop through elements in an array
    //and other data structures, like vectors and lists):

    //for (type variableName : arrayName) {
   // code block to be executed
  // }

  std::string names[3]={"Emre","Furkan","Ali"};


  for(auto x: names){
    std::cout<< x<<"\n";
  }







    return 0;
}