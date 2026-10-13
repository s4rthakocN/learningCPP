#include <iostream>

int main() {
    // to have the array size in c++, you can do size(array)
    // but manually sizeof(array)/sizeof(array[0])

    std::string animals[] = {"dog", "cat", "tiger", "wolf"};
    for (int i = 0; i < sizeof(animals)/sizeof(animals[0]); i++) {
        std::cout << animals[i] << '\n';
    }

    // for each loop ->

    for(std:: string animal : animals) {
        std::cout << animal << '\n';   
    }
}