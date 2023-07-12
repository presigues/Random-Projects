// Advanced Calculator Main

#include <iostream>
#include <cmath>

int main(){
//def
    char symbol;
    double num1;
    double num2;
    double results;
    
//begin
std::cout << "*************** CALCULATOR ***************" << std::endl;
//def symbols
std::cout << " s = Square Root" << std::endl;
std::cout << " p = Power" << std::endl;

std::cout << "Select An Operator (+, -, *, /, p, s) > ";
std::cin >> symbol;

// pwr
if (symbol == 'p'){

    std::cout << "Select Your Base Number > ";
    std::cin >> num1;

    std::cout << "Select Your Power > ";
    std::cin >> num2;

    results = pow(num1, num2);

    std::cout << "Result: " << results << std::endl;

}

// sqrtroot
else if(symbol == 's'){

std::cout << "Select Your Number to Square Root > ";
std::cin >> num1;

results = sqrt(num1);

std::cout << "Result: " << results << std::endl;

}

// - +

else if(symbol == '+'){

std::cout << "Select Your First Number > ";
std::cin >> num1;

std::cout << "Select Your Second Number > ";
std::cin >> num2;

results = num1 + num2;

    std::cout << "Result: " << results << std::endl;
}

// -
else if(symbol == '-'){

std::cout << "Select Your First Number > ";
std::cin >> num1;

std::cout << "Select Your Second Number > ";
std::cin >> num2;

results = num1 - num2;

    std::cout << "Result: " << results << std::endl;
}

// - *
else if(symbol == '*'){

std::cout << "Select Your First Number > ";
std::cin >> num1;

std::cout << "Select Your Second Number > ";
std::cin >> num2;

results = num1 * num2;

    std::cout << "Result: " << results << std::endl;
}

// - /
else if(symbol == '/'){

std::cout << "Select Your First Number > ";
std::cin >> num1;

std::cout << "Select Your Second Number > ";
std::cin >> num2;

results = num1 / num2;

    std::cout << "Result: " << results << std::endl;
}

else{
    std::cout << "Please only type an Operator, 'p', or 's' " << std::endl;
}
 
std::cout << "**************************************";

return 0;
    
    }