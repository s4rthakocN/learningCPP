#include <iostream>

int main() {
    std::string name;
    int age;

    std::cout << "enter your name" << '\n';
    std::cin >> name;
    std::cout << '\n';

    // while taking inputs of string with length
    // use this std::getline(std::cin, name)

    // std::string college;
    // std::cout << "enter college name";
    // std::getline(std::cin, college);
    // std::cout << "college name is :" << college;

    // we are facing the input buffer issue here, after hitting enter
    // the terminal exits the code because of \n character in the buffer
    // hence we do std::getline(std::cin >> std::ws, college)
    // ** THIS ALSO HAPPENS IF WE TRY TO TAKE A STRING INPUT AFTER AN INTEGER/FLOAT etc.
    
    std::string college;
    std::cout << "enter college name";
    std::getline(std::cin >> std::ws, college);
    std::cout << "college name is :" << college;

    return 0;
}