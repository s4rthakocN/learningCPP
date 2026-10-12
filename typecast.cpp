#include <iostream>

int main() {
    int correct = 8;
    int total = 10;

    double score = (double)correct/total * 100;
    // if any one of corret or total to double else it'd give wrong output because
    // we are using integers to store a value in a double value which would cause error
    std::cout << score << "%";
}