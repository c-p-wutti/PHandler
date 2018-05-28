//
//  PHandler.hpp
//  PHandler
//
//  Created by Christopher Peter Wutti on 28/05/2018.
//  Copyright © 2018 Christopher Peter Wutti. All rights reserved.
//

#ifndef PHandler_hpp
#define PHandler_hpp

#include "WSet.hpp"
#include <vector>

class PHandler
{
public:
    PHandler();
    void add_WSet(WSet::WSet new_set);
    WSet get_WSet_at_Position(int pos);
    void eval_Command(std::string command);
    
private:
    std::vector<WSet> list_of_commands;
    
};

#endif /* PHandler_hpp */
