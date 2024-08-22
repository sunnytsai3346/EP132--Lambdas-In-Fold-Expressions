//(... * args) is a fold expression that multiplies all arguments in the pack.

#include <typeinfo>
#include <cstdio>
#include <iostream>

//fold expression
// ... + args means sum up args
template<typename... Args>
auto products(Args... args) {
    return (... * args);  // fold expression for multiply all arguments
}

int main() {
    auto result = products(1, 2, 3, 4, 5);
    std::cout << "Product: " << result << std::endl;
    return 0;
}
