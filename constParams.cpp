#include <iostream>

void printInfo(std::string name, int age);

int main() {
    // using const with function params guarantees
    // that the function cannot modify the arguements passed to it

    // parameter that is effectively read-only
    // code is more secure & conveys intent
    // useful for references and pointers

    std::string name;
    std::cout << "ENTER YOUR NAME: " ;
    std::getline(std::cin >> std::ws, name);
    
    int age;
    std:: cout << "ENTER YOUR AGE: ";
    std::cin >> age;

    printInfo(name,age);
}

void printInfo(const std::string name, const int age) {
    // name = "";
    // age = 0;

    // we cannot modify the params, it'll throw an error

    std::cout << "Name: " << name << '\n';
    std::cout << "Age: " << age << '\n';
}