#include "Person.hpp"
#include <iostream>

Person::Person(const std::string& name, int age) : name(name), age(age) {}

void Person::introduce() const 
{
    std::cout << "Hi, I am " << name << " and I am " << age << " years old." << std::endl;
}
