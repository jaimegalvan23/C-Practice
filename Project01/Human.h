#include <string>
using namespace std;

class Human{
public:
    Human(const string &name, int age) : name_(name), age_(age) {}

    void setName(const string& name) {
        name_ = name;
    }
    void setAge(int age) {
        age_ = age;
    }

    string getName() {
        return name_;
    }
    int getAge() {
        return age_;
    }

private:
    string name_;
    int age_;

};
