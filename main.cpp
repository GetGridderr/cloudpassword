#include <iostream>

int main() {
    std::cout << "Стандарт C++: " << __cplusplus << std::endl;

    if (__cplusplus == 201703L) {
        std::cout << "Используется стандарт C++17." << std::endl;
    } else if (__cplusplus == 202002L) {
        std::cout << "Используется стандарт C++20." << std::endl;
    } else if (__cplusplus == 201402L) {
        std::cout << "Используется стандарт C++14." << std::endl;
    } else if (__cplusplus == 201103L) {
        std::cout << "Используется стандарт C++11." << std::endl;
    } else if (__cplusplus == 199711L) {
        std::cout << "Используется стандарт C++98." << std::endl;
    } else {
        std::cout << "Неизвестный стандарт." << std::endl;
    }

    return 0;
}
