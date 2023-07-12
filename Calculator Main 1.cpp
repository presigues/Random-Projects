// More String Operators


#include <iostream>
#include <cmath>

int main(){


// name.length - how many characters in string
// name.empty - no characters in string
// name.clear - clears string
// name.append - adds characters to end of string
// name.at - only prints defined letter by number
// name.insert - adds characters to front of string
// name.find - find  amount of characters before first accurence of character or space
//name.erase - removes certain parts of strings

std::string name;


std::cout << "Enter Your Username" << std::endl;
std::getline(std::cin, name);

name.erase(0, 3);

std::cout << name;








return 0;
}