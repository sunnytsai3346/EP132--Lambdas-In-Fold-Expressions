#include <typeinfo>
#include <cstdio>
#include <iostream>

//fold expression
// ... - args means subtract all arguments
template<typename... Args>
auto customAdd(Args... args) {
    
    return ([args](){return args+3;}() + ...);  // fold expression for custom add all arguments
}

int main() {
    auto result = customAdd(1,2,3); // (1+3)+(2+3)+(3+3)
    std::cout << "customAdd: " << result << std::endl;
    return 0;
}
