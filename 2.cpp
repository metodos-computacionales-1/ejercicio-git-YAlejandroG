#include <iostream>
#include <cmath>

int main(void){
    float l1;
    std::cout<<"Ingresar primer lado"<<std::endl;
    std::cin>>l1;
    std::cout<<"Lado 1 = "<<l1<<std::endl;
    float l2;
    std::cout<<"Ingresar segundo lado"<<std::endl;
    std::cin>>l2;
    std::cout<<"Lado 2 = "<<l2<<std::endl;
    float H;
    std::cout<<"Ingresar hipotenusa"<<std::endl;
    std::cin>>H;
    std::cout<<"Hipotenusa = "<<H<<std::endl;
    if(pow(l1,2)+pow(l2,2)==pow(H,2)){
        std::cout<<"SI pueden representar los lados de un triangulo rectangulo"<<std::endl;
    }
    else{
        std::cout<<"NO pueden representar los lados de un triangulo rectangulo"<<std::endl;
    }
}