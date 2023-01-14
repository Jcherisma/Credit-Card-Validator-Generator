#include<iostream>
#include<string>
#include "Validator_Generator.h"


using namespace std;


int main() {
 std::cout<< "Hello would you like to valid a credit card number or generate one?" << "\n" <<std::endl;
 std::cout<< "Please enter V for Valid or G for Generate" << "\n" <<std::endl;

char usrInp;

std::cin >> usrInp;

switch(usrInp){
    case 'V':
        break;
    case 'G':
        break;
    default:
        std::cout<< "Invalid input" << std::endl;        
}
return 0;
}