#include <iostream>

int main() {
    int num;
    std::cout<<"introdusca un numero: "<<std::endl;
    std::cin>>num;
    
    int decenas = num / 10;
    int unidad = num % 10;
    int invertir = unidad * 10 + decenas;
    std::cout<< "el numero es: "<<num<<std::endl;
     std::cout<< "el numero invertido es: "<<invertir<<std::endl;
     
    return 0;
}
//numero invertido