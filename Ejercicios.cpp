#include <iostream>

int main() {
    int num, num2;
    std::cout<<"introdusca un numero que no sea 0: "<<std::endl;
    std::cin>>num;
    std::cout<<"introdusca un numero que no sea 0: "<<std::endl;
    std::cin>>num2;
    int suma = num + num2;
    std::cout<< "el la suma es: "<<suma<<std::endl;
    int
    comparacion = num == num2;
    std::cout<< "los numeros son iguales: "<<comparacion<<std::endl;
    
    return 0;
}
Comparacion de dos numeros

producto de la suma
#include <iostream>

int main() {
    int num, num2;
    std::cout<<"introdusca un numero que no sea 0: "<<std::endl;
    std::cin>>num;
    std::cout<<"introdusca un numero que no sea 0: "<<std::endl;
    std::cin>>num2;
    int suma = num + num2;
    std::cout<< "el la suma es: "<<suma<<std::endl;
    int producto = suma * suma;
    std::cout<< "el producto de la suma es: "<<producto<<std::endl;
    
    return 0;
}

Invertir numero

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

numero mayor

#include <iostream>

int main() {
    int num, num2, num3, num4, num5;
    std::cout<<"introdusca un numero que no sea 0: "<<std::endl;
    std::cin>>num;
    std::cout<<"introdusca un numero que no sea 0: "<<std::endl;
    std::cin>>num2;
    std::cout<<"introdusca un numero que no sea 0: "<<std::endl;
    std::cin>>num3;
    std::cout<<"introdusca un numero que no sea 0: "<<std::endl;
    std::cin>>num4;
    std::cout<<"introdusca un numero que no sea 0: "<<std::endl;
    std::cin>>num5;
    
    for(int i = 0; i == 0; i++) {
        if(num > num2 and num > num3 and num > num4 and num > num5){
            std::cout<<"el numero mayor es: "<<num;
        }
        else if(num2 > num and num2 > num3 and num2 > num4 and num2 > num5){
            std::cout<<"el numero mayor es: "<<num2;
        }
        else if(num3 > num and num3 > num2 and num3 > num4 and num3 > num5){
            std::cout<<"el numero mayor es: "<<num3;
        }
        else if(num4 > num and num4 > num2 and num4 > num3 and num4 > num5){
            std::cout<<"el numero mayor es: "<<num4;
        }
        else if(num5 > num and num5 > num2 and num5 > num3 and num5 > num4){
            std::cout<<"el numero mayor es: "<<num5;
        }
        else {
            std::cout<<"El numero introducido no es valido"<<std::endl;
        }
    }
    
     return 0;
}