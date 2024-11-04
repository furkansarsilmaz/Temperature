#include <iostream>
int main(){
    float celcius ;
    float fahrenheit ;
    float number ;
    float result ;
    char op ;
    std::cout<< "########## Converter ##########\n";
    std::cout << "for Fahrenheit press F\n" ;
    std::cout << "for Celcius press C\n" ;
    std::cout << "Press for operation : " ;
    std::cin >> op ;
    if (op == 'F' || op == 'f')
    {
        std::cout << "Give the number : " ;
        std::cin >> number ;
        result = ( number - 32 ) / 1.8 ;
        std::cout << "Result is : " << result <<std::endl;
    }
    else if (op == 'C' || op == 'c')
    {
        std::cout << "Give the number : " ;
        std::cin >> number ;
        result = number * 1.8 + 32 ;
        std::cout << "Result is : " << result <<std::endl ;
    }
    std::cout<< "###############################";
    return 0 ;
}
