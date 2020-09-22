//
//  parse.hpp
//  calc
//
//  Created by db on 9/19/20.
//

#pragma once

#ifndef parse_hpp
#define parse_hpp

#include <stdio.h>
#include <string>
#include <array>
#include <numeric>
#include <vector>

namespace prs {
    class mStr {
    public:
        char setStr(char* s);
        int calc();

        
    private:
        std::vector<int> nums();
        char ops();
        
        int compute(std::vector<int> &nn, char oo);


        char* s_;
        std::string ops_;
    };
}

#endif /* parse_hpp */
