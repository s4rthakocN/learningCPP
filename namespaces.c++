#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main(){
    int x = 1;
    std::cout << first::x;
    // or we can do this
    using namespace first;
    std::cout << x;
}
