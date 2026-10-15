#include <iostream>

int main() {
    std::string name;
    std::cout << "enter your name" << '\n'; 
    std::getline(std::cin, name);
    
    // .clear(), clears everything written in a string
    // .append(), adds another string/char to another string
    // .at(index), gives the letter at the specfic index
    // .insert(index, valueToBeInserted) ->
    // let name = "lamp" , name.insert(0, '@'); -> "@lamp"
    // .find(), finds the character and gives it index where it first appears
    // .erase(from, to), you can delete a substring from a string

    return 0;
}