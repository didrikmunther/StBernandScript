//
//  Helper.hpp
//  StBernandScript
//
//  Created by Didrik Munther on 15/01/16.
//  Copyright © 2016 Didrik Munther. All rights reserved.
//

#ifndef Helper_hpp
#define Helper_hpp

#include <stdio.h>
#include <string>


namespace Helper {
    
    std::string removeTrailingZeros(std::string input);
    std::string removeUntil(std::string input, char until);
    
    bool isAllowedString(std::string allowed, std::string input);
    bool isIdentifier(std::string input);
    bool isNumber(std::string input);
    
}

#endif /* Helper_hpp */
