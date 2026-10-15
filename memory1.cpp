#include <iostream>

void swap(std::string &x, std::string &y);

int main() {
    std::string x = "tool";
    std::string y = "cool";

    swap(x,y);

    std::cout << x << '\n';
    std::cout << y << '\n';

    return 0;
}

void swap(std::string &x, std::string &y) {
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

// here we passed by reference
// as if only x and y were passed, they were only copies
// of the original values in the main
// hence the swap calling just swaps the copies within itself
// and the main function prints the original values of x and y