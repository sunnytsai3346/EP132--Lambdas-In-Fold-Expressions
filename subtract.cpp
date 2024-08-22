#include <typeinfo>
#include <cstdio>
#include <iostream>

//fold expression
// ... - args means subtract all arguments
template<typename... Args>
auto customSubtract(Args... args) {
    [](auto a, auto b) { return a - b; }; // Custom operation (subtraction)
    return (... - args);  // fold expression for subtract all arguments
}

int main() {
    auto result = customSubtract(10,1,2,3); // 10-1-2-3
    std::cout << "customSubtract: " << result << std::endl;
    return 0;
}
