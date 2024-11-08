#include "Human.h"
#include <iostream>

// Constructor definition
Human::Human(const std::string &name, int age) : name_(name), age_(age) {}

// Setter for name
void Human::setName(const std::string& name) {
    name_ = name;
}

// Setter for age
void Human::setAge(int age) {
    age_ = age;
}

// Getter for name
std::string Human::getName() const {
    return name_;
}

// Getter for age
int Human::getAge() const {
    return age_;
}


