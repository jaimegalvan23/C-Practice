#include <iostream>
#include <string>
#include "Human.h"

using namespace std;

int main() {
    string name;
    cout << "What is your name: ";
    cin >> name;
   
    Human User(name, 18);

    cout << "Your name is " << User.getName() << " and you are " 
         << User.getAge() << " years old, and you will start your new life in this world\n"; 

    return 0;
}
