//
//  parse.cpp
//  calc
//
//  Created by db on 9/19/20.
//

#include "parse.hpp"
#include <iostream>

namespace prs {
    char mStr::setStr(char *s) {
        s_ = s;
        return 0;
    }
    
    char mStr::ops() {
        ops_ = s_; // coerse to str::
        // std::vector<char> oo;
        // char none = "0";
        std::string p[4] = { "+", "-", "/", "*" };
        for (int i=0; i<4; i++) {
            std::size_t loc = ops_.find(p[i]);
            if (loc != std::string::npos) {
                std::cout << "found " << p[i] << " at " << loc << "\n";
                return p[i][0];
            }
        }
        std::cout << "no operators found\n";
        return '0';
    }
    
    std::vector<int> mStr::nums() {
        int num;
        std::vector<int> ns;
        char* tt;
        tt = strtok(s_, "*/-+");
        while (tt != NULL) {
            printf("%s\n", tt);
            num = std::stoi(tt);
            ns.push_back(num);
            tt = strtok(NULL, "*/-+");
        }
        return ns;
    }
    
    int mStr::compute(std::vector<int> & nn, char oo) {
        int n0 = nn[0];
        int n1 = nn[1];
//        int n0 = 88;
//        std::cout << n0 << " " << n1;
        switch (oo) {
            case '+':
                return n0 + n1;
            case '-':
                return n0 - n1;
            case '*':
                return n0 * n1;
            case '/':
                return n0 / n1;

            default:
                return 0;
       }
        
    }
    
    int mStr::calc() {
        char oo = ops();
        std::vector<int> nn = nums();
        int ans = compute(nn, oo);
//        int ans = 5;
        std::cout << "calc = " << ans << "\n";
        return 0;
    }
}
