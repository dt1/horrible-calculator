#include "parse.hpp"
#include <iostream>

int game_loop() {
    bool tf = true;
    prs::mStr s;
    std::string i;
    
    std::cout << "welcome to horrible calculator\n";
    while (tf) {
        std::cout << "enter an expression or press 'e' to exit.\n";
        std::cout << ">> " ;
        std::getline(std::cin, i);
        if (i == "e") {
            return NULL;
        }
        s.setStr(&i[0]);
        s.calc();
    }
    return  NULL;
}

int main() {
    game_loop();
    std::cout << "thanks for playing!\n";
    return 0;
}
