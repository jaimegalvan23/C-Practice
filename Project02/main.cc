#include <iostream>
#include <memory>
#include <string>

class entity {
public: 
    entity (std::string name, std::string race) : name_(name) , race_(race) {}

    void SetName(std::string name) {
        name_ = name;
    }
    std::string GetName() {
        return name_;
    }
    void SetRace(std::string race) {
        race_ = race;
    }
    std::string GetRace() {
        return race_;
    }

private:
    std::string name_;
    std::string race_;
};

int main() {
    int x{10};
    int* n = &x;

    std::cout << *n << std::endl;

    *n = 100;

    std::cout << n << std::endl;

    std::shared_ptr<entity> ptr1 = std::make_shared<entity> ("Pablo", "African");

    std::shared_ptr<entity> ptr2 = ptr1;

    std::cout << ptr1->GetName() << std::endl;

    

    return 0;
}
