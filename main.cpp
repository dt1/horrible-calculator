//
//  main.cpp
//  calc
//
//  Created by db on 9/19/20.
//

#include "parse.hpp"
#include <iostream>

int main() {
    prs::mStr s;
    std::string i;

    std::cout << "welcome to horrible calculator\n";
    std::getline(std::cin, i);

    s.setStr(&i[0]);
    s.calc();

    main();

//    int z = 5 / 6;
//    std::cout << z << "\n";
//    return 0;
}
