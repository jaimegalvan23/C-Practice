#include <iostream>
#include <string>
#include "Human.h"
#include "Actions.h"

int main() {
  std::string name;
  std::cout << "What is your name: ";
  std::getline(std::cin, name);

  Human user(name, 18);

  std::cout << "Your name is " << user.getName() << " and you are "
            << user.getAge() << " years old, and you will start your new life in this world\n"; 

  std::cout << "You wake up in your home, what will your action be\n"
            << "1. Go to work\n" << "2. Go to store\n"
            << "3. Go outside\n" << "4. Exit Game\n";
  //this is gonna loop the actions from home: Go to work, Go to store, Go outside, stop playing
  std::string input;
  while(true) {
    std::cin >> input;
    if (input == "1") {
      std::cout << "You went to work\n";
    } else if (input == "2") {
      std::cout << "you went to the store\n";
    } else if (input == "3") {
      std::cout << "You went outside\n";
      outside();
    } else if (input == "4") {
      break;
    } else {
      std::cout << "invalid input, please try again\n";
    }
  }
  std::cout << "Thanks for playing\n";

  return 0;
}
//g++ main.cc Human.h Human.cc Actions.cc Actions.h -o program <- This is to make build
//./program <- this is to run build