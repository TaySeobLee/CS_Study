#include <iostream>
#include "example/example.hpp"

int main() {
    std::cout << cs::greet("CS_Study") << "\n";
    std::cout << "2 + 3 = " << cs::add(2,3) << "\n";
    return 0;
}
