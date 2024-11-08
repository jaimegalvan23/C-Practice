#ifndef HUMAN_H
#define HUMAN_H

#include <string>

class Human {
public:
    Human(const std::string &name, int age);

    void setName(const std::string& name);
    void setAge(int age);

    std::string getName() const;
    int getAge() const;

private:
    std::string name_;
    int age_;
};

#endif
