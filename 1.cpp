#include <iostream>
#include <cmath>

int main(void){
    int R;
    std::cout<<"Ingresar radio"<<std::endl;
    std::cin>>R;
    std::cout<<"Ha ingresado un valor de radio R = "<<R<<std::endl;
    int D = 2*R;
    std::cout<<"Diametro D = "<<D<<std::endl;
    float P = 2*M_PI*R;
    std::cout<<"Perimetro P = "<<P<<std::endl;
    float A = pow(R,2)*M_PI;
    std::cout<<"Area A = "<<A<<std::endl;
}