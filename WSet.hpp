//
//  WSet.hpp
//  PHandler
//
//  Created by Christopher Peter Wutti on 27/05/2018.
//  Copyright © 2018 Christopher Peter Wutti. All rights reserved.
//

#ifndef WSet_hpp
#define WSet_hpp

#include <iostream>
#include <string>
#include <functional>

class WSet
{
    
    public:
    WSet(std::string key, std::function<void()> func);
    std::string get_keyword();
    void execute_function();
    
    private:
    std::function<void()> func;
    std::string keyword;
};
#endif /* WSet_hpp */
