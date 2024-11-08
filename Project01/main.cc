#include <iostream>
#include <string>
#include "Human.h"

int main() {
    std::string name;
    std::cout << "What is your name: ";
    std::getline(std::cin, name);

    Human user(name, 18);

    std::cout << "Your name is " << user.getName() << " and you are "
              << user.getAge() << " years old, and you will start your new life in this world\n"; 

    return 0;
}
