#include <typeinfo>
#include <cstdio>
#include <iostream>

//fold expression
// ... + args means sum up args
template<typename... Args>
auto sum(Args... args) {
    return (... + args);  // fold expression for summing up all arguments
}

int main() {
    auto result = sum(1, 2, 3, 4, 5);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}
