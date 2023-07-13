// Temp Calculator
#include <iostream>
#include <cmath>

int main(){

double temp;
char unit;

std::cout << "************** Temp Converter ****************" << std::endl;

std::cout << "F = Fahrenheit" << std::endl;
std::cout << "C = Celsius" << std::endl;
std::cout << "What unit would you like to convert too?" << std::endl;
std::cin >> unit;


// Chooses F
if(unit == 'F' || unit == 'f'){
std::cout << "Enter the Temp in Celsius > " << std::endl;
std::cin >> temp;

temp = (1.8 * temp) + 32.0;
std::cout << "The Temp is > " << temp << "F" << std::endl;
}

// Chooses C
else if(unit == 'C' || unit == 'c'){
std::cout << "Enter the Temp in Fahrenheit > " << std::endl;
std::cin >> temp;

temp = (temp - 32) / 1.8;
std::cout << "The Temp is > " << temp << "C" << std::endl;
}
else{
    std::cout << "Please Only Enter C or F" << std::endl;
}

std::cout << "*********************************************** ";

    return 0;
}